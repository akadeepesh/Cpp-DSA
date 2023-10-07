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
    int way1 = ways(n - 1);
    int way2 = ways(n - 2);
    return way1 + way2;
}

int main()
{
    ways(4);
}