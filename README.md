# Voxel Zombies WebGL

This is a mutliplayer Unity game that runs in the browser. It features multiplayer networking using webRTC data channels.
## How to run

Instructions for setting up the various servers that make up Crashblox.

### NGINX Reverse Proxy

All HTTPS communication for Crashblox is routed through an NGINX reverse proxy. This allows us to use a single wildcard SSL certificate with each internal server represented as a subdomain.

To run the reverse proxy, Install NGINX on Ubuntu and replace the default configuration with reverse-proxy.conf.

[reverse-proxy.conf](reverse-proxy.conf)

### Crashblox Node.js Server

The Node.js server handles serving static files such as HTML pages, map files, and the Crashblox client itself as a Unity WebGL build. 

It can be started up by navigating to the crashblox directory and running "node crashbloxServer.js" in a CMD window.

[crashbloxServer.js](crashblox/crashbloxServer.js)

### Identity Server

The Identity Server is python FastAPI server that manages a SQLite database of user information. It integrates with Google OAuth for account authenication. 

To run the Identity server navigate to the [identity](identity/) directory. 

Install Poetry through pip, create and activate virtual environment, then run main.py in virtual environment.

```console
foo@bar:~/identity$ pip install poetry
foo@bar:~/identity$ poetry install
foo@bar:~/identity$ poetry shell
(.venv) foo@bar:~/identity$ python main.py
```

### Unity Game Server

The Crashblox Game server is responsible for establishing webRTC connections with the browser based game clients.
The server receives inputs from the clients, simulates the player movements, and sends resulting states back to the clients.

To run the game server navigate to ServerBuild/Windows and run the .exe of the Unity application. 
 

