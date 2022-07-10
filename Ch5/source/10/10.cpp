#include <10.h>

PrintTree::PrintTree()
{
    cout << "Please provide number of rows" << endl;
    cin >> numberOfRows;
    
    for (int y = 1; y <= numberOfRows; y++)
    {
        for (int i = numberOfRows - y; i > 0; i--)
            cout << ".";

        for (int j = 0; j < y; j++)
            cout << "*";

        cout << endl;
    }
}
