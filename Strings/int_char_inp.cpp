#include <iostream>
using namespace std;

int main()
{
    char arr[10];
    int a;
    cin >> a;
    cin.ignore();
    cin.getline(arr, 10);
    cout << a;
    cout << arr << endl;
}