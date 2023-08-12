#include <iostream>
using namespace std;

bool is_safe(int board[4][4], int i, int j, int n)
{
    // horizontally
    for (int k = 0; k < n; k++)
    {
        if (board[i][k] == 1)
        {
            return false;
        }
    }

    // vertically
    for (int k = 0; k < n; k++)
    {
        if (board[k][j])
        {
            return false;
        }
    }

    // diagonally right
    int x = i, y = j;
    while (x >= 0 and y < n)
    {
        if (board[x][y])
        {
            return false;
        }
        x--;
        y++;
    }

    x = i, y = j;
    while (x >= 0 and y >= 0)
    {
        if (board[x][y])
        {
            return false;
        }
        x--;
        y--;
    }
    return true;
}

bool place(int board[4][4], int i, int n)
{
    if (i == n)
    {
        for (int l = 0; l < n; l++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << board[k][l] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int j = 0; j < n; j++)
    {
        bool safe = is_safe(board, i, j, n);
        if (safe)
        {
            board[i][j] = 1;
            bool rest = place(board, i + 1, n);
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
    int board[4][4] = {0};
    place(board, 0, 4);
}