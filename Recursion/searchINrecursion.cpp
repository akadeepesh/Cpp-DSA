#include <iostream>
using namespace std;

int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int l = sizeof(arr) / sizeof(arr[0]);

void find(int i, int n)
{
    if (arr[i] == n)
    {
        cout << "True";
        return;
    }
    find(i + 1, n);
    return;
}

int main()
{
    find(0, 7);
}