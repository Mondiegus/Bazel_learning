#include <06.h>

CharityAccount::CharityAccount()
{
    cout << "Put the number of new users: ";
    cin >> numberOfUsers;
    users = new Users[numberOfUsers];
    logUsers();
}

CharityAccount::CharityAccount(struct Users _users[], int _size)
{
    users = new Users[_size];
    numberOfUsers = _size;
    for (size_t i = 0; i < _size; i++)
    {
        users[i].name = _users[i].name;
        users[i].money = _users[i].money;
        assignGroup(users, i);
    }
}

void CharityAccount::logUsers()
{
    for (int i = 0; i < numberOfUsers; i++)
    {
        cout << "Please provide the name: ";
        cin >> users[i].name;
        cout << "Please provide the amount of money: ";
        cin >> users[i].money;
        assignGroup(users, i);
    }
}

void CharityAccount::printUsers()
{
    cout << "SUPER USERS:" << endl;
    for (auto i = superUsers.begin(); i < superUsers.end(); i++)
    {
        cout << users[*i].name << endl;
    }

    cout << endl
         << "USERS:" << endl;

    for (auto i = normalUsers.begin(); i < normalUsers.end(); i++)
    {
        cout << users[*i].name << endl;
    }
}