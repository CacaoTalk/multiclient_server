#include "User.hpp"

User::User(int fd) : _fd(fd) { }

User::~User() { }

string User::getNickname(void) const {
    return _nickname;
}