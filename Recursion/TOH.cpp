#include <iostream>
using namespace std;

void arrange(int n, char source, char helper, char destination)
{
    if (n == 0)
    {
        return;
    }

    // Recursive case
    arrange(n - 1, source, destination, helper);
    cout << n << " ko " << source << " se " << destination << " rakho" << endl;
    arrange(n - 1, helper, source, destination);
}

int main()
{
    int n = 3;
    arrange(n, 'A', 'B', 'C');
}