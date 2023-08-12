/*  :: --> scope resolution operator (to access global var/scope) */

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter number of lines :";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << " ";

        for (int j = 1; j <= N - i + 1; j++)
        {
            cout << "*";
        }
        cout << " ";

        for (int j = 1; j <= N - i + 1; j++)
        {
            cout << "*";
        }
        cout << " ";

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}