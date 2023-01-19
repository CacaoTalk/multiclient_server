#pragma once

#ifndef CHANNEL_HPP
# define CHANNEL_HPP

# include <map>
# include "User.hpp"
using namespace std;

class Channel {
    private:
		string _name;
		map<string, User *> _userList;
		map<string, User *> _operList; // kick, user check

        Channel(const Channel& channel);
        Channel& operator=(const Channel& channel);

    public:
        Channel(void);
        ~Channel();
};

#endif
