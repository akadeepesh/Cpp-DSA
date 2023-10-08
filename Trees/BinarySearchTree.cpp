#include <iostream>
#include <queue>
#include <cmath>

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

class Pair
{
public:
    int height;
    bool isBalanced;
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

    // Predefined input array
    int arr[] = {5, 3, 7, 2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        root = insertInBST(root, arr[i]);
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

    else if (root->data > key)
    {
        return SearchInBST(root->left, key);
    }

    else
    {
        return SearchInBST(root->right, key);
    }
}

bool CheckBalanced(node *root)
{
    if (!root)
    {
        return true;
    }

    int hl = height(root->left);
    int hr = height(root->right);

    if (abs(hl - hr) <= 1 && CheckBalanced(root->left) && CheckBalanced(root->right))
    {
        return true;
    }

    return false;
}

Pair checkBalanced_O(node *root)
{
    Pair p;

    if (!root)
    {
        p.height = 0;
        p.isBalanced = true;

        return p;
    }

    Pair left = checkBalanced_O(root->left);
    Pair right = checkBalanced_O(root->right);

    p.height = max(left.height, right.height) + 1;

    if (abs(left.height - right.height) <= 1 && left.isBalanced && right.isBalanced)
    {
        p.isBalanced = true;
    }

    else
    {
        p.isBalanced = false;
    }

    return p;
}

node *buildBalancedBST(int a[], int s, int e)
{
    // base case
    if (s > e)
    {
        return NULL;
    }

    // recursive case
    int m = (s + e) / 2;
    node *root = new node(a[m]);
    root->left = buildBalancedBST(a, s, m - 1);
    root->right = buildBalancedBST(a, m + 1, e);
    return root;
}

int main()
{
    // node *root = createBST();
    int a[] = {1, 2, 4, 5, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(int);
    node *root = buildBalancedBST(a, 0, n - 1);

    preOrder(root);
    cout << endl;

    inOrder(root);
    cout << endl;

    postOrder(root);
    cout << endl;

    Pair x = checkBalanced_O(root);

    if (x.isBalanced)
    {
        cout << "Balanced";
    }

    else
    {
        cout << "Not balanced";
    }
}
