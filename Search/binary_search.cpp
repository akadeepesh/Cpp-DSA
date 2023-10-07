#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele = 5;
    int s = 0, e = n - 1;
    for (int i = 0;; i++)
    {
        int mid;
        mid = (s + e) / 2;
        if (arr[mid] > ele)
        {
            e = mid - 1;
        }
        else if (arr[mid] < ele)
        {
            s = mid + 1;
        }
        else if (arr[mid] == ele)
        {
            cout << "Element found at " << mid + 1 << "th position";
            break;
        }
        else
        {
            cout << "Element Not In Array";
        }
    }
}