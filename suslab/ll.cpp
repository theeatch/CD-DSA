#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class LinkedList
{
private:
    node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insert(int elem)
    {
        node *temp = new node;
        temp->data = elem;
        temp->next = NULL;
        node *cur = head;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            while (cur->next != NULL)
            {
                cur = cur->next;
            }
            cur->next = temp;
        }
    }

    void insertbeg(int ele){
        node *temp = new node;
        temp->data = ele;
        temp->next=head;
        head=temp;
    }

    void del(){
        node *temp = head;
        head=head->next;
        cout<<"deleted item "<<temp->data<<endl;
        delete (temp);
    }

    void insertat(int pos,int ele){
        node *temp = new node;
        node *prev,*cur;
        cur=head;
        temp->data = ele;
        for(int i=0;i<pos;i++){
            prev=cur;
            cur=cur->next;
        }
        prev->next=temp;
        temp->next=cur;
    }

    void print()
    {
        node *cur = head;
        while (cur != NULL)
        {
            cout << cur->data << endl;
            cur = cur->next;
        }
    }
};

int main()
{
    cout << "Inside main" << endl;
    LinkedList L;
    L.insert(1);
    L.insert(2);
    L.insert(3);
    L.insert(4);
    L.print();
    cout<<"Insert at beginning" << endl;
    L.insertbeg(5);
    L.print();
    cout<<"delete at beginning" << endl;
    L.del();
    L.print();
    cout<<"insert at any position: "<<endl;
    
    L.insertat(2,5);
    L.print();
}