#pragma once

#include <stdio.h>
#include <iostream>

using namespace std;

class CustomClock
{
public:
    CustomClock();
    CustomClock(int _hours, int _minutes) : hours(_hours), minutes(_minutes){};
    void printTime();
    int getHours() { return hours; }
    int getMinutes() { return minutes; };
    ~CustomClock(){};

private:
    int hours;
    int minutes;
};