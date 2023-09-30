#include <iostream>
using namespace std;

void generate_parenthesis(char *a, int i, int n, int open, int close)
{

    // base case
    if (i == 2 * n)
    {
        a[i] = '\0';
        cout << a << endl;
        return;
    }

    if (open < n)
    {
        a[i] = '(';
        generate_parenthesis(a, i + 1, n, open + 1, close);
    }
    if (open > close)
    {
        a[i] = ')';
        generate_parenthesis(a, i + 1, n, open, close + 1);
    }
}

int main()
{
    int n = 3;
    char a[] = "";
    generate_parenthesis(a, 0, 0, 0, 0);
}