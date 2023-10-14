#include <iostream>
#include <vector>
using namespace std;
class Minheap
{
    vector<int> v;

public:
    Minheap()
    {
        v.push_back(-1);
    }

    void push(int d)
    {
        v.push_back(d);
        int i = v.size() - 1;
        int p = i / 2;
        while (p > 0 && v[p] > v[i])
        {
            swap(v[p], v[i]);
            i = p;
            p = p / 2;
        }
    }
    void heapify(int i)
    {
        int mi = i;
        int left = 2 * i;
        int right = left + 1;
        if (left < v.size() && v[mi] > v[left])
        {
            mi = left;
        }
        if (right < v.size() && v[mi] > v[right])
        {
            mi = right;
        }
        if (mi != i)
        {
            swap(v[mi], v[i]);
            heapify(mi);
        }
    }

    void pop()
    {
    }
    int top()
    {
        return v[1];
    }
    bool empty()
    {
        return v.size() == 1;
    }
};

int main()
{
    int a;
}