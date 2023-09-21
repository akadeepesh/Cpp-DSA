#include <iostream>
using namespace std;

// array is always passed by reference
// size can't be calculated in a function where actual array is not created

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
}
