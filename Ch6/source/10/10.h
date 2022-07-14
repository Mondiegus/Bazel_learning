#pragma once

#include <stdio.h>
#include <fstream>
#include <ICharityAccount.h>

using namespace std;

class CharityAccountFile : public ICharityAccount
{
public:
    CharityAccountFile();
    CharityAccountFile(string path);
    void printUsers() override;
    ~CharityAccountFile(){};

private:
    ifstream file;
    string filename;
    void logUsers() override;
};
