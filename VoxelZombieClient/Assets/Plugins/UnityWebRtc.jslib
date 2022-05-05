mergeInto(LibraryManager.library, {   

  AddIceCandidate: function (candidate) {
    // 1. This checks for the server indicating it could not provide any
    //    ICE Candidates.
    if (candidate.candidate === '') {
      return console.error('the server had no ICE Candidates')
    }
  
    // 2. Pass the ICE Candidate to the Client PeerConnection
    peerConnection.addIceCandidate(candidate)
  },

  SendAnswer: function (offer) {

  const SendAnswerUrl = "https://rtc.crashbloxserver.net/send-answer-get-candidate/"

  // 1. Create the client side PeerConnection
  peerConnection = new RTCPeerConnection({
    iceServers: [
      {
        urls: "stun:stun2.l.google.com:19302"
      }
    ]
  });
  const clientId = offer.clientId

  unityInstance.SendMessage('Network', 'SetClientId', offer.clientId)

  // 2. Set the offer on the PeerConnection
  peerConnection.setRemoteDescription(
    { type: 'offer', sdp: offer.sdp }
  ).then(function() {
    // 3. Create an answer to send to the Server
    peerConnection.createAnswer().then(function(answer) {
      // 4. Set the answer on the PeerConnection
      peerConnection.setLocalDescription(answer).then(function() {

        var body = JSON.stringify({clientId: clientId, sdp: answer.sdp})

        // 5. Send the answer to the server
        fetch(SendAnswerUrl, {
          method: 'POST',
          headers: {
            'Content-Type': 'application/json',
          },
          body: body
        })
          .then(function(response) {
            return response.json()
          })
          .then(_AddIceCandidate)
      })
    })
  })

  //set up data channel
  peerConnection.ondatachannel = function (event) {

      const dataChannel = event.channel

      if(dataChannel.label === 'Reliable'){
        peerConnection.reliableChannel = dataChannel

        dataChannel.onmessage = function(event) {            

          unityInstance.SendMessage('Network', 'ReceiveReliableMessage', event.data)
        }
      }
      else if(dataChannel.label === 'Unreliable'){
        peerConnection.unreliableChannel = dataChannel

        dataChannel.onmessage = function(event) {
          unityInstance.SendMessage('Network', 'ReceiveUnreliableMessage', event.data)
        }
      }
   
    }
},




SendReliableMessage: function(message){
  peerConnection.reliableChannel.send(Pointer_stringify(message))
},


SendUnreliableMessage: function(message){
  peerConnection.unreliableChannel.send(Pointer_stringify(message))
},


Connect__deps: ['SendAnswer', 'AddIceCandidate'],
Connect: function (baseUrl) {

  var url = Pointer_stringify(baseUrl)

  try{
    fetch(url)
    .then(function(response) {
      return response.json()
    })
    .then(function(offer){
      return _SendAnswer(offer)
    })
  }
  catch(e){
  }
    
},

});