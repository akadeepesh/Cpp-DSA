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

void insertAtBeginning(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *n = new node(data);
        head = n;
        tail = n;
    }
    else
    {
        node *n = new node(data);
        n->next = head;
        head = n;
    }
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node *head, *tail;
    head = tail = NULL;
    insertAtBeginning(head, tail, 1);
    insertAtBeginning(head, tail, 2);
    insertAtBeginning(head, tail, 3);
    insertAtBeginning(head, tail, 5);
    print(head);
}