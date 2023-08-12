#include <iostream>
#include <cstring>
using namespace std;

int length(char *arr)
{
    for (int i = 0;; i++)
    {
        if (arr[i] == '\0')
        {
            return i;
        }
    }
}

int main()
{
    char arr[] = "Hello World";
    cout << length(arr) << endl;
    cout << strlen(arr) << endl; // inbuilt func
}