# Voxel Zombies WebGL

This is a mutliplayer Unity game that runs in the browser. It features multiplayer networking over RTC connections.

## How to run

Instructions for setting up the various servers that make up Crashblox.

### NGINX Reverse Proxy

All HTTPS communication for Crashblox is routed through an NGINX reverse proxy. This allows us to use a single wildcard SSL certificate with each internal server represented as a subdomain.

To run the reverse proxy, Install NGINX on Ubuntu and replace the default configuration with reverse-proxy.conf.

### Crashblox Node.js Server

The Node.js server handles serving static files such as HTML pages, map files, and the Crashblox client itself as a Unity WebGL build. 

It can be started up by navigating to the crashblox folder and running "node crashbloxServer.js" in a CMD window.

[crashbloxServer.js](crashblox/crashbloxServer.js)

```docker-compose up --build```

If you would like host this game on your own website,
change the environment variable DOMAIN to one that you control.

