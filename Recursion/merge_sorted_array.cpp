#include <iostream>
using namespace std;

void sortit(int *arr, int *arr1, int *arr2, int n, int m)
{
    if (n == -1 || m == -1)
    {
        return;
    }
}

int main()
{
    int arr1[] = {1, 3, 4, 7};
    int arr2[] = {2, 3, 5, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int arr[n + m];
    sortit(arr, arr1, arr2, n, m);
}