#pragma once

#ifndef CHANNEL_HPP
# define CHANNEL_HPP

# include <map>
# include <set>
# include "User.hpp"
using namespace std;


class Channel {
    private:
		string _name;
		map<int, User *> _userList;
		set<int> _operList;

        Channel(void);
        Channel(const Channel& channel);
        Channel& operator=(const Channel& channel);

    public:
        Channel(const string& name);
        ~Channel();

        void addUser(int clientFd, User *user);
        int deleteUser(int clientFd);
        bool isUserOper(int clientFd);
};

#endif
