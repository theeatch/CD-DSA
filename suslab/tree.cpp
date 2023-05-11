#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*left;
  Node*right;
  Node(int d){
    data=d;
    left=NULL;
    right=NULL;
  }
};
Node* buildtree(){
  int d;
  cin>>d;
  Node*root;
  if(d==-1){
    return NULL;
  }
  root=new Node(d);
  cout<<"Left child of "<<d<<endl;
  root->left=buildtree();
  cout<<"Right child of "<<d<<endl;
  root->right=buildtree();
  return root;
}
void print(Node*root){
  if(root==NULL){
    return;
  }
    cout<<root->data<<" ";
  print(root->left);

  
  print(root->right);
}
int main()
{
    cout<<"enter the root of tree: \n";
    Node*root=buildtree();  
    print(root);
  return 0;
}