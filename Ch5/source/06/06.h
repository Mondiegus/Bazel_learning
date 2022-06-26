#pragma once

#include <stdio.h>
#include <iostream>
#include <string>
#define NumberOfMonths 12
#define NumberOfYears 3
using namespace std;

class SoldBooks
{
public:
    SoldBooks();
    SoldBooks(int _soldBooks[][12], int years);
    int numberOfSoldBooks();
    ~SoldBooks(){};

private:
    
    char *months[NumberOfMonths] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
        };
    int soldBooks[NumberOfYears][NumberOfMonths];
};
