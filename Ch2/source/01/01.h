#pragma once
#include <string>

using namespace std;

class Citizen
{
public:
    Citizen() : surname("Kowalski"), address("nope"){};
    Citizen(string _surname, string _address) : surname(_surname), address(_address){};
    void printSurnameAndAddress();
    string getSurname() const { return surname; }
    string getAddress() const { return address; }
    ~Citizen(){};

private:
    string surname;
    string address;
};