#include "Server.hpp"
#include <iostream>

Server::Server() {
	struct sockaddr_in serverAddr;

	if ((_fd = socket(PF_INET, SOCK_STREAM, 0)) == -1)
		throw runtime_error("socket() error");
	
	memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    serverAddr.sin_port = htons(6667);
	fcntl(_fd, F_SETFL, O_NONBLOCK);
	updateEvents(EVFILT_READ, EV_ADD | EV_ENABLE, 0, 0, NULL);

	if (bind(_fd, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == -1)
        throw runtime_error("bind() error");

	if (listen(_fd, 5) == -1)
        throw runtime_error("listen() error");
}

Server::~Server() { }

void Server::initKqueue() {
    if ((_kq = kqueue()) == -1)
        throw runtime_error("kqueue() error");
}

 void Server::updateEvents(int16_t filter, uint16_t flags, uint32_t fflags, intptr_t data, void *udata) {
	struct kevent event;

	EV_SET(&event, _fd, filter, flags, fflags, data, udata);
	_eventCheckList.push_back(event);
 }