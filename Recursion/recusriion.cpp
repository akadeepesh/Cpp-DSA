#include <iostream>
using namespace std;

void printkr(int i)
{
    if (i == 0)
    {
        return;
    }
    cout << i << " ";
    printkr(i - 1);
}

int main()
{
    printkr(10);
}