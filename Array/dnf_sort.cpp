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

void dnf(int arr[], int n)
{
    int z = 0;
    int t = n - 1;
    for (int i = 0; i <= t;)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[z]);
            i++;
            z++;
        }
        else if (arr[i] == 1)
        {
            i++;
        }
        else
        {
            swap(arr[i], arr[t]);
            t--;
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 1, 2, 0, 0, 2, 1, 2, 1, 0, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_Array(arr, n);
    dnf(arr, n);
    print_Array(arr, n);
}