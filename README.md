# multiclient_server
construct server which can deal with multi-client using kqueue()

## 🎯 TO DO
Want to make a chat server <br>
The server **get messages** from clients and **send these messages** to all other clients who is currently connected to this server

## ✔️ Test
- You can connect to this server using [netcat](https://en.wikipedia.org/wiki/Netcat)
1. Execute server
![image](https://user-images.githubusercontent.com/64132798/213835859-a615a09f-e9ea-490d-9d48-611dc26568b5.png)

2. Connect nc client to this server (Port# : 6667)
![image](https://user-images.githubusercontent.com/64132798/213835899-f5349c09-3e22-4210-8e0a-3773594d6da2.png)
[6667](https://wiki.wireshark.org/IRC.md) is well-known TCP port number for IRC traffic

3. Type somes messages
![image](https://user-images.githubusercontent.com/64132798/213837356-4a27e3c3-452b-4a45-8c1f-5b0a11f0454e.png)

4. Check all clients can receive that messages <br>
Currently the client who sends that message also receive identical message ! <br>
We are considering the user not to get back that message
