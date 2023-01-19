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

# include "User.hpp"

using namespace std;

class Server {
    private:
        int _fd;
		map<string, User *> allUser;

        Server(const Server& server);
        Server& operator=(const Server& server);

    public:
        Server(void);
        ~Server();
		
};

#endif
