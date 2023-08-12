#include <iostream>
#include <cstring>
using namespace std;
void combine(char *arr, char *arr1)
{
    int n1 = strlen(arr);
    int n2 = strlen(arr1);
    for (int i = n1, j = 0; j <= n2; i++, j++)
    {
        arr[i] = arr1[j];
    }
    cout << arr;
}
int main()
{
    char arr[100] = "Hello ";
    char arr1[100] = "World\n";
    combine(arr, arr1); // same as strcat
}