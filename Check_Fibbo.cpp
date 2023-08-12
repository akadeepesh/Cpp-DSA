// Given a number check if it is a member of Fibonacci sequence or not
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, N;
    cout << "Enter A Number :";
    cin >> N;

    a = 0;
    b = 1;
    c = 1;

    while (a <= N)
    {
        if (a == N)
        {
            cout << a;
            return 0;
        }
        c = a + b;
        a = b;
        b = c;
    }
    cout << "Number not exist";

    return 0;
}