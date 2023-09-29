// Given a list of N integers, find mean,  maximum and minimum value. You would  be given first N, and then N integers of the  list.

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int i, N, num;
    long long min, max;
    max = INT_MIN;
    min = INT_MAX;
    cout << "Enter a number :";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cout << "Enter the number : ";
        cin >> num;
        if (num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
    }

    cout << min << "is minimum number\n";
    cout << max << "is maximum number\n";
    // Sum part already done
}