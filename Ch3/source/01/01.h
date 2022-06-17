#pragma once
#include <string>

using namespace std;

class HeightConverter
{
public:
    HeightConverter(double _heightCm) : heightCm(_heightCm){};
    HeightConverter();
    void calcHeight();
    void printHeight();
    double getHeightInCm() const { return heightCm; };
    double getHeightInInc() const { return heightInc; };
    double getHeightInFoots() const { return heightFoots; };
    ~HeightConverter(){};

private:
    double heightCm;
    double heightInc;
    double heightFoots;
    const double InchToMm = 25.4;
    const double footToInches = 12.0;
};