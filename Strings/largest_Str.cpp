#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, len = 0, mlen;
    cout << "Enter number of input :";
    cin >> n;
    char arr[100];
    char m_arr[100];
    for (int i = 0; i <= n; i++)
    {
        cin.getline(arr, 100);
        mlen = strlen(arr);
        if (mlen > len)
        {
            len = mlen;
            strcpy(m_arr, arr);
        }
    }
    cout << len << endl;
    cout << m_arr;
}