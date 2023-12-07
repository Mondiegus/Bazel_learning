#include <stdio.h>
#include <08.h>

void multiplyByTwo(int &el)
{
    el *= 2;
}

void t08()
{
    ListObj *lst = new ListObj(5);
    ListObj *lst_temp = lst;
    lst_temp->Add(1);
    lst_temp->Add(2);
    lst_temp->Add(3);
    lst_temp->Add(4);
    lst_temp->Add(5);
    lst->PrintAll();
    lst->Visit(multiplyByTwo);
    lst->PrintAll();
}

int main()
{
    t08();
    return 0;
}