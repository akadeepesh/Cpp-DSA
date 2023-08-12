#include <iostream>
using namespace std;

void print_subarray(int arr[], int s, int e)
{
    cout << "\n";
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            print_subarray(arr, i, j);
            cout << endl;
        }
    }
}