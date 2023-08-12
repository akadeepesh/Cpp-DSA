#include <iostream>
using namespace std;

int ways(int n)
{
    // Base case
    if (n < 0)
    {
        return 0;
    }

    if (n == 0)
    {
        return 1;
    }

    // Recursive case
    int sum = 0;
    for (int k = 1; k <= n; k++)
    {
        sum += ways(n - k);
    }
    return sum;
}

int main()
{
    cout << ways(4);
}