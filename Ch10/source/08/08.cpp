#include <08.h>

using namespace std;
bool ListObj::Add(int _val)
{
    bool ret = false;
    ListObj *temp = this;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    if (size <= this->max_size)
    {
        temp->next = new ListObj();
        temp->next->prev = temp;
        temp->next->val = _val;
        size++;
        ret = true;
    }

    return ret;
}

bool ListObj::IsEmpty()
{
    return (size == 0);
};

bool ListObj::IsFull()
{
    return (size == this->max_size);
}

void ListObj::PrintAll()
{
    ListObj *temp = this->next;

    cout << val << endl;
    while (temp != nullptr)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void ListObj::Visit(void (*pf)(int &))
{
    ListObj *temp = new ListObj();

    pf(val);
    temp = this->next;
    while (temp != nullptr)
    {
        pf(temp->val);
        temp = temp->next;
    }
}
