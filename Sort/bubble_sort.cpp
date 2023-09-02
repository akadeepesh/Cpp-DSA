#include <iostream>
using namespace std;
// bubble sort - n^2 (time complexity)
int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "\nBefore sorting \t ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    // sorting
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "\nAfter sorting \t ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}