#include <iostream>
#include <limits.h>
using namespace std;

int sum_subarray(int csum[], int s, int e)
{
    return s == 0 ? csum[e] : csum[e] + csum[s - 1];
}

int max_sub_sum(int arr[], int n)
{
    int csum[n];
    for (int i = 0; i < n; i++)
    {
        csum[i] = arr[i] + csum[i - 1];
    }

    int ans = INT_MIN;
    for (int s = 0; s < n; s++)
    {
        for (int e = s; e < n; e++)
        {
            int curr_sum = sum_subarray(csum, s, e);
            if (curr_sum > ans)
            {
                ans = curr_sum;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << max_sub_sum(arr, n) << endl;
}