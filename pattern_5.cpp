/*
Q.  0
    10
    101
    0101
    01010
*/

#include <iostream>
using namespace std;
int main()
{
    int num = 0, j = 1, N;
    cout << "Enter number of rows :";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num = 1 - num;
        }
        cout << endl;
    }
}