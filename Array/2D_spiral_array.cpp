#include <iostream>
using namespace std;

void spiral_print(int arr[][5], int m, int n)
{
    int fr = 0, fc = 0, lr = m - 1, lc = n - 1;
    while (fr <= lr and fc <= lc)
    {
        for (int col = fc; col <= lc; col++)
        {
            cout << arr[fr][col] << " ";
        }
        fr++;
        for (int row = fr; row <= lr; row++)
        {
            cout << arr[row][lc] << " ";
        }
        lc--;
        for (int col = lc; col >= fc; col--)
        {
            cout << arr[lr][col] << " ";
        }
        lr--;
        for (int row = 0; row >= fr; row--)
        {
            cout << arr[row][fc] << " ";
        }
        fc++;
        cout << endl;
    }
}

int main()
{
    int arr[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int m = sizeof(arr) / sizeof(arr[0]);
    int n = sizeof(arr[0]) / sizeof(arr[0][0]);
    spiral_print(arr, m, n);
}