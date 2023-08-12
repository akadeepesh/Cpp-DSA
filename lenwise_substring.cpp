#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool palindrome(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i++] != s[j--])
        {
            return false;
        }
    }
    return true;
}

void print_all_substr(string s, int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            string substr = s.substr(j, i);
            if (palindrome(substr))
            {
                cout << substr << endl;
            }
        }
    }
}

int main()
{
    string s = "racecar";
    int n = s.length();
    print_all_substr(s, n);
}