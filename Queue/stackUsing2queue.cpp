#include <iostream>
#include <queue>
using namespace std;
int f;
class Stack
{
    queue<int> q1;
    queue<int> q2;

public:
    void push(int d)
    {
        if (q1.empty() && q2.empty())
        {
            q1.push(d);
        }
        else if (q1.empty() && !q2.empty())
        {
            q2.push(d);
        }
        else if (!q1.empty() && q2.empty())
        {
            q1.push(d);
        }
    }
    void pop()
    {
        if (!q1.empty() && q2.empty())
        {
            while (q1.size() > 1)
            {
                f = q1.front();
                q1.pop();
                q2.push(f);
            }
            q1.pop();
        }
        else
        {
            while (q2.size() > 1)
            {
                f = q2.front();
                q2.pop();
                q1.push(f);
            }
            q2.pop();
        }
    }
    int top()
    {
        if (!q1.empty() && q2.empty())
        {
            while (q1.size() > 1)
            {
                f = q1.front();
                q1.pop();
                q2.push(f);
            }
            int ans = q1.front();
            q1.pop();
            q2.push(ans);
            return ans;
        }
        else
        {
            while (q2.size() > 1)
            {
                f = q2.front();
                q2.pop();
                q1.push(f);
            }
            int ans = q2.front();
            q2.pop();
            q1.push(ans);
            return ans;
        }
    }
    bool empty()
    {
        if (q1.empty() && q2.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while (!s.empty())
    {
        cout << s.top() << '\t';
        s.pop();
    }
}