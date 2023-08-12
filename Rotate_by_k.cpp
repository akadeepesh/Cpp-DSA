#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "\nBefore Rotate :- \t";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Q. rotate k times with single loop
    // for (int j = 0; j < k; j++)
    // {
    //     int l = arr[n - 1];
    //     for (int i = n - 2; i >= 0; i--)
    //     {
    //         arr[i + 1] = arr[i];
    //     }
    //     arr[0] = l;
    // }

    cout << "\nAfter Rotate :- \t";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}