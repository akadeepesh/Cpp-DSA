#include <iostream>
using namespace std;

int main()
{
    int n, target;
    cout << "Enter number of elements in array ";
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter target element ";
    cin >> target;

    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int sum = arr[start] + arr[end];
        if (sum == target)
        {
            cout << arr[start] << " " << arr[end] << endl;
            start++;
            end--;
        }
        if (sum > target)
        {
            end--;
        }
        if (sum < target)
        {
            start++;
        }
    }
}