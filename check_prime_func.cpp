#include <iostream>
using namespace std;

bool check_prime(int N)
{
    if (N == 1 || N == 0)
    {
        return false;
    }

    for (int i = 2; i <= N / 2; i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a;
    cout << "Enter number :";
    cin >> a;

    check_prime(a) ? cout << "Prime\n" : cout << "Not prime\n";
}