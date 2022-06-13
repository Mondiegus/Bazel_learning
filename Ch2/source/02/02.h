#pragma once
#include <stdio.h>
#include <iostream>

class MilesToMetersConverter
{
public:
    MilesToMetersConverter();
    MilesToMetersConverter(double _miles) : miles(_miles){};
    double getValueInMeters();
    ~MilesToMetersConverter(){};

private:
    double miles;
};