#pragma once
#include <stdio.h>
#include <iostream>

class BmiCalc
{
public:
    BmiCalc();
    BmiCalc(double _pounds, double _foot, double _inches) : pounds(_pounds), foot(_foot), inches(_inches){};
    void printBmi();
    void calcWeight();
    void calcHeight();
    void calcBmi();
    double getKg() { return kg; };
    double getMeters() { return meters; };
    double getBmi() { return bmi; };
    ~BmiCalc(){};

private:
    double pounds;
    double foot;
    double inches;

    double kg;
    double meters;
    double bmi;

    const double poundsToKg = 2.2;
    const double footToInches = 12.0;
    const double inchesToMeters = 0.0254;
};