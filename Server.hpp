#pragma once

#ifndef SERVER_HPP
# define SERVER_HPP

# include <string>
# include <map>
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
