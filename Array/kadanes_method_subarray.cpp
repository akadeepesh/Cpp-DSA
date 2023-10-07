#include <iostream>
#include <climits>
using namespace std;

int max_sub_sum(int arr[], int n)
{
    int curr_sum = 0, ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        ans = max(curr_sum, ans);
        curr_sum = max(0, curr_sum);
    }
    return ans;
}

int main()
{
    int arr[] = {1, -2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << max_sub_sum(arr, n) << endl;
}