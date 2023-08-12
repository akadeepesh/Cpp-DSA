#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter a Char :";
    cin >> a;

    if (a >= 'A' && a <= 'Z')
    {
        cout << "Upper case";
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << "Lower case";
    }
    else
    {
        cout << "Invalid char";
    }
}