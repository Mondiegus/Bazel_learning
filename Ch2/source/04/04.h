#pragma once

#include <stdio.h>
#include <iostream>

using namespace std;

class TemperatureConversion
{
public:
    TemperatureConversion();
    TemperatureConversion(double _celsiusDegree) : celsiusDegree(_celsiusDegree){};
    void convertTempToC();
    double getCelsiusDegree() { return celsiusDegree; }
    double getKelvinDegree() { return kelvinDegree; }
    ~TemperatureConversion(){};

private:
    double celsiusDegree;
    double kelvinDegree;
};