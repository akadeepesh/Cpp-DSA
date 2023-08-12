// XOR --> Even number of 1 is 0, odd number of 1 is 1...n ^ n = 0 and n ^ 0 = n

#include <iostream>
using namespace std;

int main()
{
    int N, inp, ans = 0;
    cout << "Enter number of numbers :";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> inp;
        ans ^= inp;
    }
    cout << "Unique number is :" << ans;
}