#pragma once

#ifndef USER_HPP
# define USER_HPP

# include <string>
using namespace std;

class User {
	private:
		int _fd;
		string _nickname; // unique
		string _username;
		string _cmdBuffer;
		string _replyBuffer;

		User(void);
		User(const User& user);
		User& operator=(const User& user);

	public:
        User(int fd);
		~User();
		
		string getNickname(void) const;
		string getCmdBuffer(void);
		string getReplyBuffer(void);
		void setCmdBuffer(const char *str);
		void setReplyBuffer(const char *str);
		void addToCmdBuffer(const char *str); // 채팅 받아오기
		void addToReplyBuffer(const char *str); // write할 버퍼 추가
};

#endif