#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    string vow = "AEIOUaeiou";
    string s1 = "AeIouae";
    int count = 0;
    int n1 = vow.length();
    int n = s1.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (vow[j] == s1[i])
            {
                count++;
            }
        }
    }
    if (count == n)
    {
        cout << "Good string";
    }
    else
    {
        cout << "Not Good String";
    }
}