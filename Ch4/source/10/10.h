#pragma once

#include <stdio.h>
#include <iostream>
#include <string>
#include <array>

using namespace std;

class SprintCompetition
{
public:
    SprintCompetition();
    SprintCompetition(array<double, 3> _results) : results(_results) {};
    double calculateAverageValue();
    void printSprintCompetition();
    array<double, 3> getArray() { return results; }
    ~SprintCompetition(){};

private:
    array<double, 3> results;

    const int numberOfRuns = 3;
};
