#include <iostream>
using namespace std;

void print_hello_world()
{
    cout << "Hello World"
         << "\t";
}

void print_hello_world_n_times(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Hello World"
             << "\t";
    }
}

int sum()
{
    int n, input, sum = 0;
    cout << "Enter number of numbers :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number :";
        cin >> input;
        sum += input;
    }
    return sum;
}
int sum_of_two_numbers(int a, int b)
{
    return a + b;
}
int main()
{
    int n, result;
    // cout << "Enter a number :";
    // cin >> n;

    // print_hello_world_n_times(n);

    result = sum();
    cout << "sum = " << result << endl;

    cout << sum_of_two_numbers(12345, 54321) << endl;
}
