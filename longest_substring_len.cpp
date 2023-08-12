#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool is_vowel(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    }
    return false;
}

int longest_gss(string str)
{
    int l = 0, c = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (is_vowel(str[i]))
        {
            c++;
            l = max(l, c);
        }
        else
        {
            c = 0;
        }
    }
    return l;
}

string find_lgss(string str)
{
    int l = 0, c = 0, curr_sp = 0;
    string ans;
    for (int i = 0; i < str.size(); i++)
    {
        if (is_vowel(str[i]))
        {
            c++;
            if (c > l)
            {
                l = c;
                ans = str.substr(curr_sp, c);
            }
        }
        else
        {
            c = 0;
            curr_sp = i + 1;
        }
    }
    return ans;
}

int main()
{
    string s = "aajaaaabaio";
    cout << longest_gss(s) << endl
         << find_lgss(s) << endl;
}