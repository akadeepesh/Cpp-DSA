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

void insertAtEnd(node *&head, node *&tail, int data)
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
        tail->next = n;
        tail = n;
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

node *merge(node *head, node *head1)
{
    // base case
    if (head == NULL)
        return head1;

    if (head1 == NULL)
        return head;

    // recursive case
    node *nextHead = NULL;
    if (head->data < head1->data)
    {
        nextHead = head;
        nextHead->next = merge(head->next, head1);
    }
    else
    {
        nextHead = head1;
        nextHead->next = merge(head, head1->next);
    }
    return nextHead;
}

node *MidOfLL(node *head)
{
    node *slow = head;
    node *fast = head->next;
    int temp;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node *mergesort(node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // recursive case
    node *m = MidOfLL(head);
    // cout << "..." << m->data;
    node *a = head;
    node *b = m->next;
    m->next = NULL;
    a = mergesort(a);
    b = mergesort(b);
    node *newnode = merge(a, b);
    return newnode;
}

int main()
{
    node *head, *tail;
    node *head1, *tail1;
    head = tail = head1 = tail1 = NULL;
    insertAtEnd(head, tail, 1);
    insertAtEnd(head, tail, 12);
    insertAtEnd(head, tail, 5);
    insertAtEnd(head, tail, 8);
    insertAtEnd(head, tail, 0);
    insertAtEnd(head1, tail1, 2);
    insertAtEnd(head1, tail1, 6);
    insertAtEnd(head1, tail1, 8);
    // merge(head, head1);
    mergesort(head);
    print(head);
}