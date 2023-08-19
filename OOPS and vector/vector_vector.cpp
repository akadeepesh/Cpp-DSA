#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> D(5, vector<int>(5, 1));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << D[i][j] << " ";
        }
        cout << endl;
    }
}