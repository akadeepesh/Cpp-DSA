#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int top)
{
    if (s.empty())
    {
        s.push(top);
        return;
    }
    int ct = s.top();
    s.pop();
    insertAtBottom(s, top);
    s.push(ct);
}

void ReverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int top = s.top();
    s.pop();
    ReverseStack(s);
    insertAtBottom(s, top);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    // while (!s.empty())
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    // }
    ReverseStack(s);
    while (!s.empty())
    {
        cout << s.top() << '\t';
        s.pop();
    }
}