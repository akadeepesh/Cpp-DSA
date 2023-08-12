#include <iostream>
using namespace std;
void sort_it(int *arr, int i, int j, int n)
{
    if (i == n - 1)
    {
        return;
    }

    if (arr[j] > arr[j + 1])
    {
        swap(arr[j], arr[j + 1]);
    }
    if (j < n - 1)
    {
        sort_it(arr, i, j + 1, n);
    }
    else
    {
        sort_it(arr, i + 1, 0, n);
    }
}

void print_A(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}

int main()
{
    int arr[] = {5, 4, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort_it(arr, 0, 0, n);
    print_A(arr, n);
}