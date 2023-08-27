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

int sizeofLL(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
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

void insertAtIndex(node *&head, node *&tail, int idx, int data)
{
    if (idx == 0)
    {
        insertAtBeginning(head, tail, data);
    }
    if (idx == sizeofLL(head))
    {
        insertAtEnd(head, tail, data);
    }
    else
    {
        node *temp = head;
        for (int i = 0; i < idx - 1; i++)
        {
            temp = temp->next;
        }
        node *bm = temp->next;
        node *n = new node(data);
        n->next = bm;
        temp->next = n;
    }
}

void DeleteAtBegninig(node *&head, node *&tail)
{
    if (head == NULL)
    {
        cout << "No Elements remaining";
        return;
    }
    else
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
}

int main()
{
    node *head, *tail;
    head = tail = NULL;
    insertAtBeginning(head, tail, 1);
    insertAtBeginning(head, tail, 2);
    insertAtBeginning(head, tail, 3);
    insertAtBeginning(head, tail, 5);
    insertAtEnd(head, tail, 7);
    insertAtEnd(head, tail, 9);
    insertAtIndex(head, tail, 2, 15);
    DeleteAtBegninig(head, tail);
    print(head);
    cout << sizeofLL(head);
}