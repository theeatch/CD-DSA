#include <iostream>
using namespace std;

class node
{
public:
    int ele;
    node *left;
    node *right;
    node(int ele)
    {
        this->ele = ele;
        left = NULL;
        right = NULL;
    }
};

class bst
{
public:
    node *root = NULL;
    void insert(int ele)
    {
        node *temp = root;
        if (!root)
        {
            root = new node(ele);
            return;
        }
        node *prev;
        while (temp)
        {
            prev = temp;
            if (ele > temp->ele)
            {
                temp = temp->right;
            }
            else if (ele < temp->ele)
            {
                temp = temp->left;
            }
            else
            {
                return;
            }
        }
        if (prev->ele < ele)
        {
            prev->right = new node(ele);
        }
        else
        {
            prev->left = new node(ele);
        }
    }
    void display()
    {
        dl(root, 0);
    }
    void dl(node *root, int level)
    {
        if (!root)
            return;
        dl(root->right, level + 1);
        for (int i = 0; i < level; i++)
            cout << "   ";
        cout << root->ele << endl;
        dl(root->left, level + 1);
    }
    // void search(int findme){
    //     if(!root){
    //         cout<<"not found";
    //         return;
    //     }
    //     node* temp=root;
    //     while(temp){
    //         if(temp->ele==findme){
    //             cout<<"found";
    //             return;
    //         }
    //         if(temp->ele<findme){
    //             temp=temp->right;
    //         }
    //         else{
    //             temp=temp->left;
    //         }
    //     }
    //     cout<<"not found";
    // }
    void search(node *root, int findme)
    {
        if (!root)
        {
            cout << "not found";
            return;
        }
        if (root->ele == findme)
        {
            cout << "found";
            return;
        }
        if (root->ele > findme)
        {
            search(root->left, findme);
        }
        else
        {
            search(root->right, findme);
        }
    }
    void deletnode(int ele)
    {
        if (!root)
            return;
        node *temp = root;
        node *prev, *curr;
        while (temp)
        {
            if(temp->ele==ele){
                curr=temp;
                break;
            }
            prev = temp;
            if (temp->ele < ele)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        if (!curr->right && !curr->left)
        {
            if (prev->left == curr)
            {
                prev->left = NULL;
            }
            else
            {
                prev->right = NULL;
            }
            delete (curr);
            return;
        }
        if (!curr->right)
        {
            if (prev->left == curr)
            {
                prev->left = curr->left;
            }
            else{
                prev->right=curr->left;
            }
            return;
        }
        if(!curr->left)
        {
            if(prev->left==curr){
                prev->left=curr->right;
            }
            else{
                prev->right=curr->right;
            }
            return;
        }
        node* succ=curr->right;
        while (succ->left!=NULL)
        {
            succ=succ->left;
        }
        int val=succ->ele;
        deletnode(val);
        curr->ele=val;
    }
};

int main()
{
    bst kaunsibt;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        kaunsibt.insert(arr[i]);
    kaunsibt.display();
    int finder;
    cin >> finder;
    // kaunsibt.search(kaunsibt.root,finder);
    kaunsibt.deletnode(finder);
    kaunsibt.display();
}