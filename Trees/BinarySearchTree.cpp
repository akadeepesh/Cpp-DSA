#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

void postOrder(node *root)
{
    if (!root)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void inOrder(node *root)
{
    if (!root)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(node *root)
{
    // base case
    if (!root)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int height(node *root)
{
    // base case
    if (!root)
    {
        return 0;
    }
    // recursive case
    return max(height(root->left), height(root->right)) + 1;
}

node *insertInBST(node *root, int data)
{
    if (!root)
    {
        root = new node(data);
        return root;
    }

    if (root->data > data)
    {
        root->left = insertInBST(root->left, data);
    }

    else
    {
        root->right = insertInBST(root->right, data);
    }

    return root;
}

node *createBST()
{
    node *root = NULL;
    int data;

    cin >> data;

    while (data != -1)
    {
        root = insertInBST(root, data);
        cin >> data;
    }
    return root;
}

node *SearchInBST(node *root, int key)
{
    if (!root)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }

    else if
    {
        return SearchInBST(root->left, key);
    }
    else
    {
        return SearchInBST(root->right, key);
    }
}

int main()
{
    node *root = createBST();
    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
}