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

void breakCycle(node *head, node *fast)
{
    node *prev = head;
    node *slow = head;
    while (prev->next != fast)
    {
        prev = prev->next;
    }
    while (fast != slow)
    {
        fast = fast->next;
        slow = slow->next;
        prev = prev->next;
    }
    prev->next = NULL;
}

bool if_repeating(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            breakCycle(head, fast);
            return true;
        }
    }
    return false;
}

void createCycle(node *&head, node *&tail)
{
    tail->next = head->next->next;
}

int main()
{
    node *head, *tail;
    head = tail = NULL;
    insertAtEnd(head, tail, 1);
    insertAtEnd(head, tail, 2);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 4);
    insertAtEnd(head, tail, 5);
    insertAtEnd(head, tail, 6);
    insertAtEnd(head, tail, 7);
    insertAtEnd(head, tail, 8);
    print(head);
    createCycle(head, tail);
    if (if_repeating(head))
    {
        cout << "true" << endl;
        print(head);
    }
    else
    {
        cout << "false" << endl;
    }
}