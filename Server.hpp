#pragma once

#ifndef SERVER_HPP
# define SERVER_HPP

class Server {
    private:
        int _fd;

        Server(const Server& server);
        Server& operator=(const Server& server);

    public:
        Server(void);
        ~Server();
};

#endif
