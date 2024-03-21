#include <iostream>

using namespace std;

int main()
{
    string names[5];

    cout << "Type five names:\n";
    for (int i = 0; i < 5; ++i)
    {
        cout << "Nome " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    cout << "\nNomes na ordem inversa:\n";
    for (int i = 4; i >= 0; i--)
    {
        cout << names[i] << endl;
    }

    return 0;
}