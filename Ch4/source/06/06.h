#pragma once

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Cookieeeees
{
public:
    struct Batonik
    {
        string name;
        double weight;
        uint16_t calories;
    };

    Cookieeeees();
    void printCookieeeees();
    ~Cookieeeees(){};

private:
    struct Batonik batoniki[3];
    const int cookiesNumb = 3;
};