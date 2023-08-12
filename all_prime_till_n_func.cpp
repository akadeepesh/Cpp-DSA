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

void all_prime(int N)
{
    for (int i = 2; i <= N; i++)
    {
        if (check_prime(i))
        {
            cout << i << "\t";
        }
    }
}

int main()
{
    int a;
    cout << "Enter number :";
    cin >> a;
    all_prime(a);
}