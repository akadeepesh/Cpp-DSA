#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> D;
    for (int i = 0; i < 5; i++)
    {
        D.push_back(i);
        cout << D[i] << "\t";
    }
    cout << endl;
    D.pop_back();
    for (int i = 0; i < D.size(); i++)
    {
        cout << D[i] << "\t";
    }
    cout << endl;
    cout << D.capacity();
}