#pragma once

#include <stdio.h>
#include <iostream>

using namespace std;

class LightYearsConverter
{
public:
    LightYearsConverter();
    LightYearsConverter(double _LightYears) : LightYears(_LightYears){};
    void convertYearsToSpaceUnit();
    double getLightYears() { return LightYears; }
    double getSpaceUnit() { return SpaceUnit; }
    ~LightYearsConverter(){};

private:
    double LightYears;
    double SpaceUnit;
};