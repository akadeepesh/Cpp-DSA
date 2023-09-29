#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter a number :";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        char ch = 'A';
        for (int j = 0; j < N - i; j++, ch++)
        {
            cout << ch;
        }
        ch--;
        for (int j = 0; j < N - i; j++, ch--)
        {
            cout << ch;
        }

        cout << endl;
    }
}