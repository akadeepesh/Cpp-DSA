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
    for (auto i : l) // for each 'i' in list l #python wala scene vro
    {
        cout << i << " ";
    }
    cout << "NULL" << endl;

    list<int>::iterator it = l.begin();
    while (it != l.end())
    {
        cout << *it << endl;
        it++;
    }
}