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

void B_sort(node *&head)
{
    int l = sizeofLL(head);
    for (int i = 0; i < l - 1; i++)
    {
        node *curr = head;
        node *prev = NULL;
        while (curr != NULL && curr->next != NULL)
        {
            node *nextele = curr->next;
            if (curr->data > nextele->data)
            {
                if (prev == NULL)
                {
                    curr->next = nextele->next;
                    nextele->next = curr;
                    prev = head = nextele;
                }
                else
                {
                    curr->next = nextele->next;
                    nextele->next = curr;
                    prev->next = nextele;
                    prev = nextele;
                }
            }
            else
            {
                prev = curr;
                curr = nextele;
            }
        }
    }
}

int main()
{
    node *head, *tail;
    head = tail = NULL;

    insertAtEnd(head, tail, 5);
    insertAtEnd(head, tail, 4);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 2);
    insertAtEnd(head, tail, 1);
    print(head);
    B_sort(head);
    print(head);
}