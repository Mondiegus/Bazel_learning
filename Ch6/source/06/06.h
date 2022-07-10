#pragma once

#include <stdio.h>
#include <ICharityAccount.h>

using namespace std;

class CharityAccount : public ICharityAccount
{
public:
    CharityAccount();
    CharityAccount(struct Users _users[], int _size);
    void printUsers() override;
    ~CharityAccount(){};

private:
    void logUsers() override;
};
