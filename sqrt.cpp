#include <iostream>
using namespace std;

int main()
{
    int a, sqrt;
    cout << "Enter a Number :";
    cin >> a;

    for (int i = 0; i * i <= a; i++)
    {
        sqrt = i;
    }
    cout << sqrt << endl;
}
