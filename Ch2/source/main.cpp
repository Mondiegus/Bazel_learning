#include <stdio.h>
#include <01.h>
#include <02.h>
#include <03.h>
#include <04.h>
#include <05.h>
#include <06.h>

using namespace std;

void t01()
{
    Citizen citizen("Kubek", "Slowackiego");
    citizen.printSurnameAndAddress();
}

void t02()
{
    MilesToMetersConverter converter;
    double value = converter.getValueInMeters();
    cout << value << endl;
}

void t03()
{
    Poem poem;
}

void t04()
{
    TemperatureConversion temperatureConversion;
    temperatureConversion.convertTempToC();
}

void t05()
{
    LightYearsConverter lightYearsConverter;
    lightYearsConverter.convertYearsToSpaceUnit();
}

void t06()
{
    CustomClock customClock;
    customClock.printTime();
}

int main()
{
    t01();
    t02();
    t03();
    t04();
    t05();
    t06();

    return 0;
}