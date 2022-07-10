#pragma once
#include <string.h>
#include <vector>
#include <iostream>

using namespace std;

class ReadChars
{
public:
    ReadChars(vector<int> _tab) : tab(_tab), size(tab.size()){};
    ReadChars();
    void printLetters();
    vector<int> getTab() { return tab; };
    int getSize() { return size; };
    ~ReadChars(){};

private:
    vector<int> tab;
    int size = 0;
};