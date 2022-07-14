#include <10.h>
#include <filesystem>

CharityAccountFile::CharityAccountFile()
{
    cout << "Put the file name: ";
    cin >> filename;
    std::cout << "Current path is " << current_path() << '\n'; // (1)
    cout<< "Filename: " << filename << endl;
    file.open(filename);
    while (!file.is_open())
    {
        cout << "Wrong name, try to put the file name again: ";
        cin >> filename;
        file.open(filename) ;
    }
    logUsers();
}

CharityAccountFile::CharityAccountFile(string path)
{
    // users = new Users[_size];
    // numberOfUsers = _size;
    // for (size_t i = 0; i < _size; i++)
    // {
    //     users[i].name = _users[i].name;
    //     users[i].money = _users[i].money;
    //     assignGroup(users, i);
    // }
}

void CharityAccountFile::logUsers()
{
    if(file.good())
    {
        file >> numberOfUsers;
    }
    for (size_t i = 0; i < numberOfUsers; i++)
    {
        getline(file, users[i].name);
        file >> users[i].money;
        assignGroup(users, i);
    }
}

void CharityAccountFile::printUsers()
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