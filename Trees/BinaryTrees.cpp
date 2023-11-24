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

node *createTree()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    node *root = new node(data);
    root->left = createTree();
    root->right = createTree();
    return root;
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

int countNodes(node *root)
{
    if (!root)
    {
        return 0;
    }

    return countNodes(root->left) + countNodes(root->right) + 1;
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

int diameter(node *root)
{
    if (!root)
    {
        return 0;
    }

    int op1 = height(root->left) + height(root->right);
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1, max(op2, op3));
}

node *findNode(node *root, int key)
{
    if (!root)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }
    node *ans = findNode(root->left, key);
    if (ans != NULL)
    {
        return ans;
    }

    ans = findNode(root->right, key);
    if (ans != NULL)
    {
        return ans;
    }

    return NULL;
}

void levelOrder(node *root)
{
    if (!root)
    {
        return;
    }
    queue<node *> q;
    q.push(NULL);
    while (!q.empty())
    {
        node *n = q.front();
        q.pop();
        if (n)
        {
            cout << n->data << " ";
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
        }
        else
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}

class Pair
{
public:
    int height;
    int diameter;
};

Pair fastDiameter(node *root)
{
    if (!root)
    {
        Pair p;
        p.height = p.diameter = 0;
        return p;
    }

    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);
    Pair p;
    p.height = 1 + max(left.height, right.height);

    int op1 = left.height + right.height;
    int op2 = left.diameter;
    int op3 = right.diameter;
    p.diameter = max(op1, max(op2, op3));
    return p;
}

void mirror(node *root)
{
    if (!root)
    {
        return;
    }

    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}

// Build tree using inorder and pre-order
int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
int k = 0;
node *buildTree(int *in, int s, int e)
{
    // base case
    if (s > e)
    {
        return NULL;
    }
    // recursive case
    int d = pre[k++];
    node *root = new node();

    for (int j = s; j <= e; ++j)
    {
        if (in[j] == d)
        {
            i = j;
            break;
        }
    }

    root->left = buildTree(in, s, i - 1);
    root->right = buildTree(in, i + 1, e);
    return root;
}

int main()
{
    int in[] = {1, 10, 4, 6, 7, 8, 3, 14, 13};
    node *root = createTree();
    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    cout << "Nodes Count: " << countNodes(root) << endl;
    cout << "Tree Height: " << height(root) << endl;
    cout << "Tree Diameter: " << diameter(root) << endl;

    node *ans = findNode(root, 116);
    if (ans != NULL)
    {
        cout << ans->data << endl;
    }
    else
    {
        cout << "Nahi milli\n";
    }
    Pair ans = fastDiameter(root);
    cout << "fast height" << ans.height << endl;
    cout << "fast height" << ans.diameter << endl;
    return 0;
}
