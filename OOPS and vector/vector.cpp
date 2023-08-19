#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> D;
    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        D.push_back(num);
        cout << D[i] << "\t";
    }
    cout << endl;
    sort(D.begin(), D.end());
    D.pop_back();
    cout << "\nAfter sorting and deleting last element:-" << endl;
    for (int i = 0; i < D.size(); i++)
    {
        cout << D[i] << "\t";
    }
    cout << endl;
    cout << D.capacity();
}