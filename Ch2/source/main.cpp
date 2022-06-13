#include <stdio.h>
#include <01.h>
#include <02.h>
#include <03.h>

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

int main()
{
    t01();
    t02();
    t03();
    return 0;
}