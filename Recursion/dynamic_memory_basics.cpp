// __________________________
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int *a = new int[n];
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = num;
//         num++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     delete[] a;
//     a = NULL;
//     return 0;
// }
// _____________________________

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int *(*p) = new int *[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << p[i][j] << " ";
        }
    }
}