#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    char arr[] = "edcba";
    int n = strlen(arr);
    sort(arr, arr + n);                  // Increasing order
    sort(arr, arr + n, greater<char>()); // Decreasing order
    reverse(arr, arr + n);               // Reverse Inbuilt
    cout << arr;
}