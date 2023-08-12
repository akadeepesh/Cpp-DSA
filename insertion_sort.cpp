#include <iostream>
using namespace std;

// time complexity = n^2

int main()
{
    int arr[] = {0, 4, 1, 2, 3, -8, -10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "\nBefore sorting :- \t";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--)
        {
            swap(arr[j], arr[j - 1]);
            // if (arr[j] < arr[j - 1])
            // {
            //     swap(arr[j], arr[j - 1]);
            // }
            // else
            // {
            //     break;
            // }
        }
    }

    cout << "\nAfter sorting :- \t ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}