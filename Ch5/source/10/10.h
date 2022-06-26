#pragma once

#include <stdio.h>
#include <iostream>
#include <string>
#include <array>

using namespace std;

class PrintTree
{
public:
    PrintTree();
    PrintTree(int _numberOfRows) {};
    int getAstrixInRowNumber(int row);
    ~PrintTree(){};

private:
    int numberOfRows = 0;
};
