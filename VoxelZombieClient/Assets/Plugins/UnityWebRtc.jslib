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

  const SendAnswerUrl = "https://rtc.crashblox.net/send-answer-get-candidate/"

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

GetUsername: function() 
{ 
  var queryString = window.location.search;
  console.log(queryString);
  
  var urlParams = new URLSearchParams(queryString);
  
  var state = urlParams.get('state')
  
  
  var code = urlParams.get('code')
  console.log(state);
  console.log(code)
  
  
  var callbackUrl = new URL('https://id.crashblox.net/auth/google/callback');
  
  var callbackParamData = {
    code : code,
    state : state
  };
  for(var k in callbackParamData){
    callbackUrl.searchParams.append(k, callbackParamData[k]);
  }
  
  fetch(callbackUrl)
    .then(function(response)
    {return response.json()} )
    .then(function(data) { console.log(data);
  
       window.localStorage.token = data.access_token;

        
  console.log("At GetUsername token is: " + window.localStorage.token)
 
  console.log("At GetUsername data.token is: " + data.access_token)

       fetch("https://id.crashblox.net/users/me",
       {
       headers: { "Authorization": "Bearer " + data.access_token}
       })
     .then(function(response) {
         return response.json()
       })
      .then(function(data) {
       console.log(data);
       if(!data.username){
         unityInstance.SendMessage('Network', 'ReceiveNoUsername')
       }
       else{
         unityInstance.SendMessage('Network', 'ReceiveUsername', data.username)
       }
   
       })
   

    })



 


},

PatchUsername: function(username){
  var newName = Pointer_stringify(username)
  console.log(newName);
  var userBody = {
    "username": newName
    };

    console.log(JSON.stringify(userBody));
    console.log("At PatchUsername token is: " + window.localStorage.token)

  fetch("https://id.crashblox.net/users/me",
    {
      method: "PATCH",
      body: JSON.stringify(userBody),
      headers: { "Authorization": "Bearer " + window.localStorage.token,
      "Content-Type": "application/json",
      "accept": "application/json"}
    })
  .then(function(response) {
      return response.json()
    })
   .then(function(data) {
     console.log(data);
     unityInstance.SendMessage('Network', 'ReceiveUsername', data.username);

    })

  
} 

});