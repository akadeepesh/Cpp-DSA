#include <iostream>
using namespace std;

int ways(int i, int j)
{
    // Base case
    if (i == 1 || j == 1)
    {
        return 1;
    }

    // Recursive case
    int way1 = ways(i - 1, j);
    int way2 = ways(i, j - 1);
    return way1 + way2;
}

int main()
{
    int n = 4;
    cout << ways(n, n);
}