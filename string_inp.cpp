#include <iostream>
using namespace std;

void take_input(char *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        char ch;
        cin.get(ch);
        arr[i] = ch;
    }
    arr[n - 1] = '\0';
}

int main()
{
    char arr[10];
    cout << "Enter char -";
    take_input(arr,10);
    // cin >> arr;
    // cin.get(arr, 10);
    cout << arr << endl;
    // cout << arr << endl;
}