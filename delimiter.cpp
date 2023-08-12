#include <iostream>
using namespace std;

void take_input(char *arr, int n, char delimiter)
{
    for (int i = 0; i < n - 1; i++)
    {
        char ch;
        cin.get(ch);
        if (ch == delimiter)
        {
            arr[i] = '\0';
            return;
        }

        arr[i] = ch;
    }
    arr[n - 1] = '\0';
}

int main()
{
    char arr[10];
    cout << "Enter char -";
    take_input(arr, 10, '\n'); // jab tak D ni aayenga nhi rukega, ofc 10 char khatam ho gye to bhi ruk jayenga
    // cin >> arr;
    // cin.get(arr, 10);
    cout << arr << endl;
    // cout << arr << endl;
}
// if getline, delimiter will be deleted (not in input buffer)