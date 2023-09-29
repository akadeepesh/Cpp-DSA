#include <iostream>
using namespace std;

int main()
{
    int N, count = 0;
    cout << "Enter a number :";
    cin >> N;

    for (int i = 1; i <= 32; i++)
    {
        if ((N & 1) == 1)
        {
            count++;
        }
        N >>= 1;
    }
    cout << count;
}

/*
int n = input, ans = 0 check =1
for (i=1; i<=32 ; check<<1, i++)
if ((N & 1) == 1)
        {
            ans++;
        }

*/