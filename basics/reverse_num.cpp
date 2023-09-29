#include <iostream>
using namespace std;

int main()
{
    int a, digits = 0, rem;
    cout << "Enter a number :";
    cin >> a;

    while (a != 0)
    {
        rem = a % 10;
        digits = digits * 10 + rem;
        a /= 10;
    }
    cout << "Reverse of the number is :" << digits;
}