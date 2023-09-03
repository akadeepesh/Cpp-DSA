#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);  // insert at end
    l.push_front(2); // insert at begnining
    l.push_back(3);
    l.push_back(4);
    l.push_front(5);
    l.push_back(6);
    for (auto e : l)
    {
        cout << e << " ";
    }
    cout << "NULL";
}