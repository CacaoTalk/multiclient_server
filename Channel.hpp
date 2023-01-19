#pragma once

#ifndef CHANNEL_HPP
# define CHANNEL_HPP

# include <map>
# include "User.hpp"

class Channel {
    private:
		std::string _name;
		map<std::string, User *> _userList;
		map<std::string, User *> _operList; // kick, user check

        Channel(const Channel& channel);
        Channel& operator=(const Channel& channel);

    public:
        Channel(void);
        ~Channel();
};

#endif
