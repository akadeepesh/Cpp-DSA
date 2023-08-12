#include <iostream>
using namespace std;

int arr[] = {1, 2, 3, 7, 8, 7};
int l = sizeof(arr) / sizeof(arr[0]);

void find(int i, int n)
{
    if (arr[i] == n)
    {
        cout << i;
        return;
    }
    if (i <= l)
    {
        find(i + 1, n);
        return;
    }
}

int main()
{
    find(0, 9);
}