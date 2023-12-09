#include <stdio.h>
#include <04.h>

void t04()
{
    Port p;
    p.Show();
    cout << p << endl;
    VintagePort vp;
    vp.Show();
    VintagePort vp2("Swoj", 5, "Kormoranisko", 2023);
    vp2.Show();
    VintagePort vp3(vp2);
    vp3.Show();
    cout << vp3 << endl;
}

int main()
{
    t04();
    return 0;
}