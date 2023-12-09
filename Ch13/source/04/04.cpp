#include <04.h>

using namespace std;

Port::Port(const char *br, const char *st, int b)
{
    brand = (char *)malloc(sizeof(br));
    memcpy(brand, br, sizeof(br));
    memcpy(style, st, sizeof(st));
    bottles = b;
}

Port::Port(const Port &p)
{
    brand = (char *)malloc(sizeof(p.brand));
    memcpy(brand, p.brand, sizeof(p.brand));
    memcpy(style, p.style, sizeof(p.style));
    bottles = p.bottles;
}

void Port::Show() const
{
    cout << "Marka: " << brand << endl;
    cout << "Styl: " << style << endl;
    cout << "Butelek: " << bottles << endl;
}

Port &Port::operator=(const Port &p)
{
    free(brand);
    brand = (char *)malloc(sizeof(p.brand));
    memcpy(brand, p.brand, sizeof(p.brand));
    memcpy(style, p.style, sizeof(p.style));
    bottles = p.bottles;
    return *this;
}

Port &Port::operator+=(int b)
{
    bottles += b;
    return *this;
}

Port &Port::operator-=(int b)
{
    if (bottles > b)
    {
        bottles -= b;
    }

    return *this;
}

ostream &operator<<(ostream &os, const Port &p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y) : Port(br, "brak", b)
{
    nickname = (char *)malloc(sizeof(nn));
    strncpy(nickname, nn, sizeof(nn));
    year = y;
}

VintagePort::VintagePort(VintagePort &vp) : Port(vp)
{
    nickname = (char *)malloc(sizeof(vp.nickname));
    memcpy(nickname, vp.nickname, sizeof(vp.nickname));
    year = vp.year;
}

VintagePort &VintagePort::operator=(const VintagePort &vp)
{
    Port::operator=(vp);
    free(nickname);
    nickname = (char *)malloc(sizeof(vp.nickname));
    memcpy(nickname, vp.nickname, sizeof(vp.nickname));
    year = vp.year;
    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    if (nickname != nullptr)
    {
        cout << "Pseudonim: " << nickname << endl;
    }
    cout << "Rok: " << year << endl;
}

ostream &operator<<(ostream &os, const VintagePort &vp)
{
    os << (Port)(vp) << ", " << vp.nickname << ", " << vp.year;
    return os;
}
