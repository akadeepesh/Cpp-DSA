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
        if (head == tail)
        {
            delete temp;
            head = NULL;
            tail = NULL;
            return;
        }
        head = head->next;
        delete temp;
        return;
    }
}

void DeleteAtEnd(node *&head, node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    else if (head == tail)
    {
        delete head;
        head = tail = NULL;
    }

    else
    {
        node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
}

void DeleteAtIndex(node *&head, node *&tail, int idx)
{
    if (idx == 0)
    {
        DeleteAtBegninig(head, tail);
    }

    else
    {
        node *temp = head;
        for (int i = 0; i < idx - 1; i++)
        {
            temp = temp->next;
        }
        node *del = temp->next;
        node *nextele = del->next;
        temp->next = nextele;
        delete del;
    }
}

bool search(node *head, int ele)
{
    node *temp = head;
    for (int i = temp->data; head != NULL; temp = temp->next)
    {
        if (temp->data == ele)
            return true;
    }
    return false;
}

bool searchrec(node *head, int ele)
{
    if (head == NULL)
        return false;
    if (head->data == ele)
        return true;
    searchrec(head->next, ele);
}

void ReverseLL(node *&head, node *&tail)
{
    node *curr = head;
    node *prev = NULL;
    while (curr != NULL)
    {
        node *nextele = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextele;
    }
    swap(head, tail);
}

node *MidOfLL(node *&head)
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
    DeleteAtEnd(head, tail);
    DeleteAtIndex(head, tail, 3);
    if (searchrec(head, 2))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    print(head);
    ReverseLL(head, tail);
    print(head);
    MidOfLL(head);
    cout << sizeofLL(head);
}

// Implement insertion, deletion, seaching, reverse, in doubly linked list