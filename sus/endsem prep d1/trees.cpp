#include <iostream>
using namespace std;

class node
{
public:
    char ele;
    node *left;
    node *right;
    node(char ele)
    {
        this->ele = ele;
        left = NULL;
        right = NULL;
    }
};

class stack
{
public:
    node *arr[100];
    int top = -1;
    void push(node *ele)
    {
        arr[++top] = ele;
    }
    node *pop()
    {
        return arr[top--];
    }
};

class tree
{
public:
    node *root = NULL;
    void postcreate(){
        string post;
        cin>>post;
        stack st;
        for(int i=0; i<post.size(); i++){
            if(post[i]<='z'&&post[i]>='a'){
                st.push(new node(post[i]));
            }
            else{
                node* temp=new node(post[i]);
                temp->right=st.pop();
                temp->left=st.pop();
                st.push(temp);
            }
        }
        root=st.pop();
    }
    void create()
    {
        root = bt();
    }
    node *bt()
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            return NULL;
        }
        node *temp = new node(n);
        temp->left = bt();
        temp->right = bt();
        return temp;
    }
    void inorder(node *root)
    {
        if (!root)
            return;
        inorder(root->left);
        cout << root->ele;
        inorder(root->right);
    }
    void preorder(node *root)
    {
        if (!root)
            return;
        cout << root->ele;
        preorder(root->left);
        preorder(root->right);
    }
    void postorder(node *root)
    {
        if (!root)
            return;
        postorder(root->left);
        postorder(root->right);
        cout << root->ele;
    }
    void rec()
    {
        cout << "Recursive";
        cout << "\nInorder:";
        inorder(root);
        cout << "\nPreorder:";
        preorder(root);
        cout << "\nPostorder:";
        postorder(root);
    }
    void in()
    {
        cout<<"\nIterative Inorder";
        stack st;
        node* temp=root;
        while (true)
        {
            if(temp){
                st.push(temp);
                temp=temp->left;
            }
            else{
                if(st.top==-1) break;
                temp=st.pop();
                cout<<temp->ele<<" ";
                temp=temp->right;
            }
        }
    }
    void pre()
    {
        cout << "\nIterative Preorder:";
        if (!root)
            return;
        stack st;
        st.push(root);
        while (st.top != -1)
        {
            node *temp = st.pop();
            if (temp->right)
                st.push(temp->right);
            if (temp->left)
                st.push(temp->left);
            cout << temp->ele << " ";
        }
    }
    void post()
    {
        cout<<"\nIterative Postorder:";
        if(!root) return;
        stack s1;
        stack s2;
        s1.push(root);
        while (s1.top!=-1)
        {
            node * temp=s1.pop();
            if(temp->left)
            s1.push(temp->left);
            if(temp->right)
            s1.push(temp->right);
            s2.push(temp);
        }
        while (s2.top!=-1)
        {
            cout<<s2.pop()->ele<<" ";
        }
    }
    void level_order(){
        cout<<endl;
        int f=0;
        int r=-1;
        int count=1;
        node* que[100];
        que[++r]=root;
        while (f<=r)
        {
            node*temp=que[f++];
            if(temp->left)
            que[++r]=temp->left;
            if(temp->right)
            que[++r]=temp->right;
            cout<<temp->ele;
            if(--count==0){
                cout<<endl;
                count=r-f+1;
            }
        }
    }
    void display(){
        dislevel(root,0);
    }
    void dislevel(node * root, int level=0){
        if(!root) return;
        dislevel(root->right, level+1);
        for(int i=0; i<level; i++) cout<<"    ";
        cout<<root->ele<<endl;
        dislevel(root->left, level+1);
    }
};

int main()
{
    tree bthogayi;
    //bthogayi.create();
    bthogayi.postcreate();
    bthogayi.rec();
    bthogayi.pre();
    bthogayi.in();
    bthogayi.post();

    cout<<"\n\nLevel Order";
    bthogayi.level_order();
    cout<<endl<<endl<<endl;
    bthogayi.display();
}