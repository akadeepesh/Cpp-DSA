#include <iostream>
using namespace std;

int main()
{
    int arr[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    for (int i = 0; i < 5; i++)
    {
        if (i % 2)
        {
            for (int j = 4; j >= 0; j--)
            {
                cout << arr[j][i] << "\t";
                break;
            }
        }
        else
        {
            for (int j = 0; j <= 4; j++)
            {
                cout << arr[j][i] << "\t";
            }
        }
        cout << "\n";
    }
}