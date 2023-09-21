#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = arr[n-1];

    cout << "\nBefore Rotate :- \t";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    for (int i = n-2; i >= 0 ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0]=l;

    cout << "\nAfter Rotate :- \t";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}