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
    // node *A = new node(1);
    // node *B = new node(1);
    // node *C = new node(1);
    A.next = &B;
    B.next = &C;
    cout << A.data << " " << A.next->data << " " << A.next->next->data;
}