using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;

public sealed class HttpAsyncClient
{
    private HttpClient HttpClient { get; } = new HttpClient()
    {
        DefaultRequestHeaders = { Accept = { new MediaTypeWithQualityHeaderValue("application/json") }}
    };

    public static HttpAsyncClient Instance { get; } = new HttpAsyncClient();

    public async Task<string> MakeTokenRequest(string requestUri, string token)
    {
        HttpRequestMessage requestMessage = new HttpRequestMessage(HttpMethod.Get, requestUri);

        requestMessage.Headers.Authorization =
            new AuthenticationHeaderValue("Bearer", token);

        HttpResponseMessage test = await HttpClient.SendAsync(requestMessage);

        return await test.Content.ReadAsStringAsync();
    }

    public async Task<string> MakeUsernamePatchRequest(string requestUri, string username, string token)
    {

  
        HttpRequestMessage requestMessage = new HttpRequestMessage(new HttpMethod("PATCH"), requestUri);
        requestMessage.Headers.Authorization =
            new AuthenticationHeaderValue("Bearer", token);
        


        var body = new
        {
            username = username
        };

        requestMessage.Content = new StringContent(JsonConvert.SerializeObject(body), Encoding.UTF8, "application/json");
        
        HttpResponseMessage test = await HttpClient.SendAsync(requestMessage);

        return await test.Content.ReadAsStringAsync();
    }
}