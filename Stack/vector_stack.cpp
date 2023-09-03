#include <iostream>
#include <vector>
using namespace std;

class stack
{
private:
    vector<int> a;

public:
    void push(int val)
    {
        a.push_back(val);
    }

    void pop()
    {
        a.pop_back();
    }

    int top()
    {
        return a[a.size() - 1];
    }

    bool empty()
    {
        if (a.size() == 0)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    stack a;
    a.push(5);
    cout << a.top();
}