#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    char ch = 'a';

    cout << "Enter char : \n";

    for (int i = 1; ch != '$'; i++)
    {
        cin.get(ch);
        count++;
    }
    cout << "Entered " << count - 1 << " characters before $";
}