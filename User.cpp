#include "User.hpp"

User::User(int fd) : _fd(fd) { }

User::~User() { }

int User::getFd(void) const {
    return _fd;
}