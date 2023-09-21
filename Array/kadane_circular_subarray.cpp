#include <iostream>
#include <climits>
using namespace std;

int kadanes(int arr[], int n)
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

int max_cir_sub_sum(int arr[], int n)
{
    int opt1 = kadanes(arr, n);
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
        arr[i] *= -1;
    }
    int opt2 = total_sum + kadanes(arr, n);
    return max(opt1, opt2);
}

int main()
{
    int arr[] = {1, -2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << max_cir_sub_sum(arr, n) << endl;
}