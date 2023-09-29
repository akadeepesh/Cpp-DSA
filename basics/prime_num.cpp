#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter A Number :";
    cin >> N;
    if (N == 1 || N == 0)
    {
        cout << "Not Prime";
        return 0;
    }

    for (int i = 2; i <= N / 2; i++)
    {
        if (N % i == 0)
        {
            cout << "Not prime";
            return 0;
        }
    }
    cout << "Prime";
}