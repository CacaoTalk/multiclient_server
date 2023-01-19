#pragma once

#ifndef USER_HPP
# define USER_HPP

# include <string>

class User {
	private:
		int _fd;
		std::string _nickname; // unique
		std::string _username;
		std::string _cmdBuffer;
		std::string _replyBuffer;

		User(const User& user);
		User& operator=(const User& user);

	public:
		User();
		~User();
};

#endif