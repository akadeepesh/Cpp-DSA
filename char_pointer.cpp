#include <iostream>
using namespace std;

int main()
{
    char ch = 'b';
    char *ptr = &ch;
    cout << ch << endl;
    cout << ptr << endl;       // address -> garbage
    cout << (int *) ptr << endl; // address -> right
}