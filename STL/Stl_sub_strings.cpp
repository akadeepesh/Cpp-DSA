#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    string s = "Coding";
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << s.substr(i, j) << "\n";
        }
    }
    // cout << s.substr(2, 3); //(2,3) is 3 chars from 2nd index - output = din
}