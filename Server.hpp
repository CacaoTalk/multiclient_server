#pragma once

#ifndef SERVER_HPP
# define SERVER_HPP

# include <string>
# include <map>
# include <exception>
# include <sys/types.h>
# include <sys/event.h>
# include <sys/time.h>
# include <sys/socket.h>
# include <arpa/inet.h>
# include <unistd.h>
# include <fcntl.h>
# include <vector>

# include "User.hpp"

using namespace std;

class Server {
    private:
        int _fd;
        int _kq;
		map<string, User *> _allUser;
        vector<struct kevent> _eventCheckList;
        struct kevent _waitingEvents[8];

        Server(const Server& server);
        Server& operator=(const Server& server);

        void shutDown(const string& msg);
        void initKqueue();
        void updateEvents(int16_t filter, uint16_t flags, uint32_t fflags, intptr_t data, void *udata);

    public:
        Server(void);
        ~Server();
        void run();
};

#endif
