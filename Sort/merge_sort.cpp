#include <iostream>
using namespace std;

void merge(int *arr1, int *arr2, int *arr, int s, int e)
{
    int m = (s + e) / 2;
    int i = s, j = m + 1, k = s;
    while (i <= m && j <= e)
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
    while (i <= m)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j <= e)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void MergeSort(int *arr, int s, int e)
{
    // Base case
    if (s >= e)
    {
        return;
    }
    // Break the array into two parts
    int m = (s + e) / 2; // mid position
    int b[100], c[100];  // two arrays to store half half part :)

    for (int i = s; i <= m; i++)
    {
        b[i] = arr[i];
    }

    for (int i = m + 1; i <= e; i++)
    {
        c[i] = arr[i];
    }

    MergeSort(b, s, m);
    MergeSort(c, m + 1, e);
    merge(b, c, arr, s, e);
}

int main()
{
    int arr[] = {2, 4, 5, 3, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    MergeSort(arr, 0, n);
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}