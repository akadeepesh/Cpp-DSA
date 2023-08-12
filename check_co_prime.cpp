#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter two numbers :";
    cin >> a >> b;
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            c = i;
            for (int j = 2; j <= b; j++)
            {
                if (b % j == 0)
                {
                    d = j;
                    if (c == d)
                    {
                        cout << "Not co-prime" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "co-prime";
    return 0;
}
// Factor of one is dividing other number or not is better approach.