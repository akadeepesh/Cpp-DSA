/*
Q.  *
    **
    ***
    ****
    *****
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter a number :";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}