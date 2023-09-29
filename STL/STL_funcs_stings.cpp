#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    string s1 = "Coding";
    // cout << s1.size() << "\t" << s1.length() << endl;
    string s2 = "Dell";
    // cout << s1 + " " + s2 << endl;
    // s1.append(" Hello World " + s2);
    // cout << s1 << endl;
    // s1 > s2 ? cout << s1 << endl : cout << s2 << endl;
    // sort(s1.begin(), s1.end());
    // cout << s1 << endl;
    cout << s1.substr(2, 3); //(2,3) is 3 chars from 2nd index - output = din
}