#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
    return a + b >= b + a;
}

int main()
{
    string s[] = {"45", "62", "67", "7", "6", "9", "91"};
    int n = sizeof(s) / sizeof(s[0]);
    sort(s, s + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }
    cout << endl;
}