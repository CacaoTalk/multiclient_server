#include "Channel.hpp"

Channel::Channel(const string& name): _name(name) {}

Channel::~Channel() { }

void Channel::addUser(int clientFd, User *user) {
    if (_userList.empty()) _operList.insert(clientFd);
    _userList.insert(pair<int, User *>(clientFd, user));
}

int Channel::deleteUser(int clientFd) {
    _userList.erase(clientFd);
    _operList.erase(clientFd);

    if (_userList.empty()) return 0;
    if (_operList.empty()) {
       pair<int, User *> nextOper;

       nextOper = *_userList.begin();
       _operList.insert(nextOper.first);
    }
    return _userList.size();
}

bool Channel::isUserOper(int clientFd) {
    set<int>::iterator it;

    if (_operList.find(clientFd) != _operList.end())
        return true;
    else
        return false;
}