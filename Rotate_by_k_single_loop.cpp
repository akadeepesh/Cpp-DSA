#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 4, 1, 2, 3, -8, -10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter k :";
    cin >> k;

    cout << "\nBefore Rotate :- \t";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }

    for (int i = 0, j = n - 1; i < k; i++, j--)
    {
        swap(arr[i], arr[j]);
    }

    for (int i = 0, j = n - 1; i < n - k; i++, j--)
    {
        swap(arr[i], arr[j]);
    }

    cout << "\nAfter Rotate :- \t";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}