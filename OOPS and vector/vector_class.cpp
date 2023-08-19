#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

class Vector
{
public:
    int *arr;
    int curr_size;
    int max_cap;
    Vector()
    {
        arr = new int[2];
        curr_size = 0;
        max_cap = 2;
    }
    void push_back(int element)
    {
        if (max_cap == curr_size)
        {
            int *old_arr = arr;
            max_cap *= 2;
            int *new_arr = new int[max_cap];
            for (int i = 0; i < curr_size; i++)
            {
                new_arr[i] = old_arr[i];
            }
            delete[] old_arr;
            arr = new_arr;
        }
        arr[curr_size] = element;
        curr_size++;
    }
    void pop_back()
    {
        curr_size--;
    }
    int size()
    {
        return curr_size;
    }
    int capacity()
    {
        return max_cap;
    }
    int operator[](int i)
    {
        return arr[i];
    }
};

int main()
{
    Vector D;
    D.push_back(2);
    D.push_back(3);
    D.push_back(4);
    cout << D.size() << endl;
    cout << D.size() << endl;
    cout << D.capacity() << endl;
    for (int i = 0; i < D.size(); i++)
    {
        cout << D[i] << "\t";
    }
}