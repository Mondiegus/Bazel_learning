#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Users
{
    string name;
    double money;
};

class ICharityAccount
{
public:
    virtual void printUsers() = 0;
    int numberOfCharityAccount() { return numberOfUsers; };
    double getUserMoney(int num) { return users[num].money; }
    bool isSuperUser(int num) { return std::find(superUsers.begin(), superUsers.end(), num) != superUsers.end(); }
    void assignGroup(struct Users *users, int i);

protected:
    virtual void logUsers() = 0;

    int numberOfUsers = 0;
    const int moneyLimit = 10000;
    struct Users *users;
    vector<int> superUsers;
    vector<int> normalUsers;
};