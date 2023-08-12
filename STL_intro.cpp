// Standard Template Library
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s1;
    string s2 = "Coding";
    s1 = s2;       // Possible
    string s3(s1); // Possible, s3 = s1
    s3[4] = 'D';   // Possible, 4th index of s3 will be D
    string s4 = s3;
    getline(cin, s4, 'D'); // input for s4, will take input till delimiter(D)
}