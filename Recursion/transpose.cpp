#include <iostream>
using namespace std;

void transpose(int arr[][5], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    swap(m, n);
}

int main()
{
    int arr[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int m = sizeof(arr) / sizeof(arr[0]);
    int n = sizeof(arr[0]) / sizeof(arr[0][0]);
    transpose(arr, m, n);
}