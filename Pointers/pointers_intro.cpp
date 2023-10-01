#include <iostream>
using namespace std;

int main()
{
    // int a = 10;
    // cout << &a << endl; // accessing the address using &
    // int *aptr = &a;     // storing add in pointer
    // cout << aptr << "\n";
    // cout << ++*aptr << "\n"; // accessing the value at address &a, * works as derefrence here
    // cout << a;               // value changed by pointer
    cout << sizeof(bool *) << endl;
    cout << sizeof(int *) << endl;
    cout << sizeof(char *) << endl;
    cout << sizeof(double *) << endl;
}