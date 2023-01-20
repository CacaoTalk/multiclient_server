#include "User.hpp"

User::User(int fd) : _fd(fd) { }

User::~User() { }

string User::getNickname(void) const {
    return _nickname;
}

string User::getCmdBuffer(void) {
    return _cmdBuffer;
}

string User::getReplyBuffer(void) {
    return _replyBuffer;
}

void User::setCmdBuffer(const char *str) {
    _cmdBuffer = str;
}

void User::setReplyBuffer(const char *str) {
    _replyBuffer = str;
}

void User::addToCmdBuffer(const char *str) {
    _cmdBuffer.append(str);
}

void User::addToReplyBuffer(const char *str) {
    _replyBuffer.append(str);
}