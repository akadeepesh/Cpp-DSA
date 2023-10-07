#include <iostream>
using namespace std;

void table_print(int start, int stop, int step)
{
    float res = 5.0 / 9.0, res1;
    while (start <= stop)
    {
        res1 = res * (start - 32);
        cout << start << "\t"
             << "|";

        cout << "\t" << res1 << endl;
        start = start + step;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter Start-Stop-Step Value Respectively :";
    cin >> a >> b >> c;
    table_print(a, b, c);
}
