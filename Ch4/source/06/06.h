#pragma once

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

struct Batonik
{
    string name;
    double weight;
    uint16_t calories;
};

class Cookieeeees
{
public:
    Cookieeeees();
    Cookieeeees(Batonik* _batoniki);
    void printCookieeeees();
    Batonik *getStruct() { return batoniki; }
    ~Cookieeeees(){};

private:
    struct Batonik batoniki[3];
    const int cookiesNumb = 3;
};
