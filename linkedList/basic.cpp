#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

int main()
{
    node A(1);
    node B(2);
    node C(3);
    A.next = &B;
    B.next = &C;
    cout << A.data << " " << A.next->data << " " << A.next->next->data;
}