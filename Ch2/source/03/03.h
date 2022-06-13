#pragma once
#include <stdio.h>
#include <iostream>

using namespace std;

class Poem
{
public:
    Poem();
    string getFirstLine() {return firstLine;}
    string getSecondLine() {return secondLine;}
    ~Poem(){};

private:
    void printTwoFirstLines();
    void printTwoLastLines();
    string firstLine = "Entliczek petliczek";
    string secondLine = "Czerwony stoliczek";
};