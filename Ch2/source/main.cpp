#include <stdio.h>
#include <01.h>
#include <02.h>

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

int main()
{
    t01();
    t02();
    return 0;
}