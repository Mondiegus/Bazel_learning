#pragma once

#include <stdio.h>
#include <iostream>
#include <string>
#include <array>
constexpr int MAX_SIZE = 10;

class ListObj
{
public:
    ListObj(){};
    ListObj(int _size) : max_size(_size){};
    int GetVal() { return val; }
    ListObj *GetNextEl() { return this->next; }
    bool Add(int _val);
    bool IsEmpty();
    bool IsFull();
    void Visit(void (*pf)(int &));
    void PrintAll();
    ~ListObj(){};

private:
    ListObj *next = nullptr;
    ListObj *prev = nullptr;
    int val = 0;
    int size = 0;
    int max_size = MAX_SIZE;
};
