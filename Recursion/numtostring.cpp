#include <iostream>

using namespace std;

void inttostring(int n)
{
    string a[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    if (n == 0)
    {
        return;
    }
    inttostring(n / 10);
    cout << a[n % 10] << " ";
}

int main()
{
    inttostring(21);
}