#include <iostream>
#include <math.h>
using namespace std;

bool is_safe(int board[9][9], int i, int j, int n, int num)
{
    // horizontally
    for (int k = 0; k < n; k++)
    {
        if (board[i][k] == num)
        {
            return false;
        }
    }

    // vertically
    for (int k = 0; k < n; k++)
    {
        if (board[k][j] == num)
        {
            return false;
        }
    }

    // box
    int root = sqrt(n);
    int si = i / root * root;
    int sj = j / root * root;

    for (int l = si; l < si + root; l++)
    {
        for (int m = sj; m < sj + root; m++)
        {
            if (board[l][m] == num)
            {
                return false;
            }
        }
    }
    return true;
}

bool place(int board[9][9], int i, int j, int n)
{
    // cout << i << " " << j << endl;
    // base case
    if (i == n)
    {
        for (int l = 0; l < n; l++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << board[l][k] << " ";
            }
            cout << endl;
        }
        return true;
    }

    // recursive case
    if (j == n)
    {
        return place(board, i + 1, 0, n);
    }

    if (board[i][j] != 0)
    {
        return place(board, i, j + 1, n);
    }

    for (int num = 1; num <= n; num++)
    {
        bool safe = is_safe(board, i, j, n, num);
        if (safe)
        {
            board[i][j] = num;
            bool rest = place(board, i, j + 1, n);
            if (rest)
            {
                return true;
            }
            board[i][j] = 0;
        }
    }
    return false;
}

int main()
{
    int board[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    place(board, 0, 0, 9);
}