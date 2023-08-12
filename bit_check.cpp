#include <iostream>
using namespace std;

int main()
{
    int N, K, res;
    cout << "Enter the number and position :";
    cin >> N >> K;

    cout << ((N >> (K - 1)) & 1) << endl;
}