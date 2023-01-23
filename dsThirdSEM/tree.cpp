#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
Node *buildtree()
{
    int d;
    cin >> d;
    Node *root;
    if (d == -1)
    {
        return NULL;
    }
    root = new Node(d);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}
void iterativePreorder(Node *root)
{
    cout << "Iterative Preorder Traversal >> ";
    if (root == NULL)
        return;
    stack<Node *> S;
    Node *curr = root;
    S.push(curr);
    while (!S.empty())
    {
        curr = S.top();
        S.pop();
        cout << curr->data << ' ';
        if (curr->right)
            S.push(curr->right);
        if (curr->left)
            S.push(curr->left);
    }
    cout << endl;
}

int main()
{
    Node *root = buildtree();
    iterativePreorder(root);
    return 0;
}