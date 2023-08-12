#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    while (n > 1)
        return n * fact(n - 1);
}

int nCr(int n, int r)
{
    return fact(n) / fact(r) * fact(n - r);
}

int main()
{
    int n, r;
    cout << "Enter n and r :";
    cin >> n >> r;
    cout << nCr(n, r);
}