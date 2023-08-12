// initialization
#include <iostream>
using namespace std;

int main()
{
    //all initialization are correct
    int arr[5][3] = {{1, 2, 3}, {4, 5, 6}, {6, 7, 9}, {10, 11, 12}, {13, 14, 15}};
    // int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {6, 7, 9}, {10, 11, 12}, {13, 14, 15}};
    
    int buckets = sizeof(arr) / sizeof(arr[0][0]);
    int rows = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    //array print-->

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}
