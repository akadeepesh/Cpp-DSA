#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter a number :";
    cin >> N;

    int i;
    
    for (i = 2; i <= N; i++)
    {
        int c=0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
            
        }
        if(c == 2)
        {
            cout<<i<<" ";
        }
    }
}