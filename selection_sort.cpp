#include <iostream>
using namespace std;

// time complexity = n^2

int main()
{
    int arr[] = {0, 4, 1, 2, 3, -8, -10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "\nBefore sorting \t ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i <= n - 2; i++)
    {
        int minimum = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[minimum] > arr[j])
            {
                minimum = j;
            }
        }
        swap(arr[minimum], arr[i]);
    }

    cout << "\nAfter sorting \t ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}