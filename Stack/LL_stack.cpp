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

class stack
{
private:
    node *head;

public:
    stack()
    {
        head = NULL;
    }
    void push(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }

    void pop()
    {
        if (head == NULL)
        {
            return;
        }
        else if (head->next == NULL)
        {
            head = NULL;
        }
        else
        {
            node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    int top()
    {
        return head->data;
    }

    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    stack a;
    a.push(5);
    cout << a.top();
}