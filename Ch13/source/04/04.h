#pragma once

#include <stdio.h>
#include <iostream>
#include <string>
#include <array>
using namespace std;

class Port
{
private:
    char *brand = nullptr;
    char style[20];
    int bottles = 0;

public:
    Port(const char *br = "brak", const char *st = "brak", int b = 0);
    Port(const Port &p);

    Port &operator=(const Port &p);
    Port &operator+=(int b);
    Port &operator-=(int b);
    int BootleCount() const { return bottles; }
    const char *GetBrand() const { return brand; }
    const char *GetStyle() const { return style; }
    virtual void Show() const;
    friend ostream &operator<<(ostream &os, const Port &p);
    virtual ~Port() { delete brand; }
};

class VintagePort : public Port
{
private:
    char *nickname = nullptr;
    int year = 0;

public:
    VintagePort() : Port(){};
    VintagePort(const char *br, int b, const char *nn, int y);
    VintagePort(VintagePort &vp);
    const char *GetNickname() const { return nickname; }
    int GetYear() const { return year; }
    VintagePort &operator=(const VintagePort &vp);
    virtual void Show() const;
    friend ostream &operator<<(ostream &os, const VintagePort &vp);
    virtual ~VintagePort() { delete nickname; };
};