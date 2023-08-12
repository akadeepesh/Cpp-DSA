#include <iostream>
using namespace std;

void print_Array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void inverse(int arr[], int n)
{
    int inverse[n];
    for (int i = 0; i < n; i++)
        inverse[arr[i]] = i;
    for (int i = 0; i < n; i++)
        arr[i] = inverse[i];
}

int main()
{
    int arr[] = {3, 0, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_Array(arr, n);
    inverse(arr, n);
    print_Array(arr, n);
}