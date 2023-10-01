#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 2};
    cout << &arr[0] << endl
         << &arr[1] << endl
         << &arr[2] << endl;
    cout << "\n"; // same above and below
    cout << arr << endl
         << arr + 1 << endl
         << arr + 2 << endl;

    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << "\t"; // array print
    }
}