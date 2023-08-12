#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n, target;
    cout << "Enter number of elements in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter target element: ";
    cin >> target;

    sort(arr, arr + n);
    int start = 0;
    int end = n - 1;
    int minDiff = INT_MAX;
    int minStart, minEnd;
    while (start < end)
    {
        int sum = arr[start] + arr[end];
        if (sum == target)
        {
            int diff = abs(arr[end] - arr[start]);
            if (diff < minDiff)
            {
                minDiff = diff;
                minStart = start;
                minEnd = end;
            }
            start++;
            end--;
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    if (minDiff != INT_MAX)
        cout << "Deepak can buy roses " << arr[minStart] << " and " << arr[minEnd] << endl;
    else
        cout << "No solution exists" << endl;
}
