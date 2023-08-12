#include <iostream>
using namespace std;

int PivotPoint(int *a, int s, int e)
{
    int i = s - 1;
    for (int j = s; j <= e - 1; j++)
    {
        if (a[e] >= a[j])
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[e]);
    return i + 1;
}

void QuickSort(int *a, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // recursive case
    int p = PivotPoint(a, s, e);
    QuickSort(a, s, p - 1);
    QuickSort(a, p + 1, e);
}

int main()
{
    int a[] = {2, 8, 5, 1, 7, 3, 4, 6};
    int e = sizeof(a) / sizeof(a[0]);
    QuickSort(a, 0, e - 1);
    for (int i = 0; i < e; i++)
    {
        cout << a[i] << " ";
    }
}