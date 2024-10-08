#include <iostream>
using namespace std;

class Queue
{
    int *a;
    int n;
    int cs;
    int f, e;

public:
    Queue(int s)
    {
        n = s;
        a = new int[s];
        cs = 0;
        f = 0;
        e = n - 1;
    }

    void push(int d)
    {
        if (cs < n)
        {
            e = (e + 1) % n;
            a[e] = d;
            cs++;
        }
        else
        {
            cout << "Overflow\n";
        }
    }

    void pop()
    {
        if (cs > 0)
        {
            f = (f + 1) % n;
            cs--;
        }
        else
        {
            cout << "Underflow\n";
        }
    }

    int front()
    {
        return a[f];
    }

    bool empty()
    {
        return (cs == 0);
    }
};

int main()
{
    Queue q(5);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Front element: " << q.front() << endl;

    q.pop();
    q.pop();

    cout << "Front element: " << q.front() << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop(); // Attempt to pop more elements than available (underflow).

    if (q.empty())
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Queue is not empty\n";
    }

    return 0;
}
