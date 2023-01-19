#pragma once

#ifndef SERVER_HPP
# define SERVER_HPP

# include <string>
# include <map>
# include "User.hpp"

class Server {
    private:
        int _fd;
		std::map<std::string, User *> allUser;

        Server(const Server& server);
        Server& operator=(const Server& server);

    public:
        Server(void);
        ~Server();
};

#endif
