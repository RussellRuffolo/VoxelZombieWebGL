FROM node

WORKDIR /app
COPY package*.json ./

RUN npm install

COPY . .

EXPOSE 8010
CMD ["node", "proxyServer.js"]
