#include <iostream>
#include <cstring>
using namespace std;

int strtoint(string s, int j, int n)
{
    if (n == -1)
    {
        return 0;
    }

    int rec_ans = strtoint(s, 0, n - 1);
    int final_ans = rec_ans * 10 + (s[n] - '0');
    return final_ans;
}

int main()
{
    string s = "1234";
    cout << strtoint(s, 0, 3);
}