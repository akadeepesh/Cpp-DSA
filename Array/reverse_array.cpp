#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 4, 1, 2, 3, -8, -10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "\nBefore Reverse :- \t";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }

    cout << "\nAfter Reverse :- \t";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}