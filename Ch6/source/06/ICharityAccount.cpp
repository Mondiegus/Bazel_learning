#include <IcharityAccount.h>

void ICharityAccount::assignGroup(struct Users *users, int i)
{
    if (users[i].money >= moneyLimit)
    {
        superUsers.push_back(i);
    }
    else
    {
        normalUsers.push_back(i);
    }
}