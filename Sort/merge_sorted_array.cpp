#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 3, 4, 7};
    int arr2[] = {2, 3, 5, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int arr[100];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (j < m)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
    while (i < n)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}