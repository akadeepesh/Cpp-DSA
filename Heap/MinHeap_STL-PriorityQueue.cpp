#include <iostream>
#include <queue>
#include <functional>
using namespace std;

// class cmp
// {
// public:
//     bool operator()(int a, int b)
//     {
//         return a > b; // return a > b for max heap
//     }
// };

int main()
{
    // priority_queue<int, vector<int>, cmp> q; //using cmp
    priority_queue<int, vector<int>, greater<int>> q; // max heap
    // priority_queue<int, vector<int>, less<int>> q;    // min heap

    q.push(1);
    q.push(10);
    q.push(2);
    q.push(5);
    q.push(4);
    q.push(3);
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}