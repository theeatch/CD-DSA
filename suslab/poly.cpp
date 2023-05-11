//
//  main.cpp
//  Polynomial
//
//  Created by veena m on 20/10/22.
//

#include <iostream>
using namespace std;

//smalest unit node
class Node
{
public:
    int c;
    int e;
    Node * next;
    Node()
    {
        next=NULL;
    }
    Node( int co, int exp)
    {
        c = co;
        e = exp;
        next=NULL;
    }
};

//A linked list of Nodes that has a link for front and last node

class LinkedList
{
public:
    Node *front, *rear;
    LinkedList()
    {
        front=rear=NULL;
    }
    void addNodeAtEnd(Node *node)
    {
        if(rear == NULL){
            rear = front=node;
        }
        else
       {
        rear->next = node;
        rear = node;
       }
    }
    //Traverse through the list 
    void print()
    {
        Node *current=front;
        while (current != NULL)
        {
            cout<<current->c<<" ";
            cout<<current->e<<endl;
            current=current->next;
        }
    }
};

//Every Polynomial is a list

class Polynomial
{
public:
    LinkedList *terms;
    Polynomial(){
        terms = new LinkedList();
    }
    void addTerm(int c, int e)
    {
        terms->addNodeAtEnd(new Node(c,e));
    }
    //Adding 2 polynomials
    Polynomial *addPolynomial(Polynomial* A, Polynomial* B)
    {
        Node *AF = A->terms->front;
        Node *BF = B->terms->front;
        Polynomial *result= new Polynomial;
        //Until one of the list becomes empty
        while( AF && BF)
        {
            //exponent is less
            //copy other term to result
            if (AF->e < BF->e)
            {
                result->addTerm(BF->c,BF->e);
                BF=BF->next;
            }
            //exponent is greater
            //copy the term to result
            else if(AF->e > BF->e)
            {
                result->addTerm(AF->c,AF->e);
                AF=AF->next;
            }
            //both are equal then add them 
            else
            {
                result->addTerm(AF->c+BF->c,AF->e);
                AF=AF->next;
                BF=BF->next;
            }
        }
        //if one of them is stil having elements, just add this list as it is
        if(AF)
            result->terms->addNodeAtEnd(AF);
        if(BF)
            result->terms->addNodeAtEnd(BF);

        return result;
    }
    
   void simplifyPolynomial()
    {
       Node *key=terms->front;
       //Key is current term to be checked with rest(remianing)
       while (key!=NULL && key->next!= NULL)
       {
           Node *rest=key;
           while(rest->next!=NULL)
           {   //current exponent is it same as rest next one?
               if(key->e == rest->next->e)
               {
                   //add c s
                   key->c+=rest->next->c;
                   //get the matched term
                   Node *temp=rest->next;
                   // rest points to prev node 
                   //make its next to point to next of matched node
                   rest->next=rest->next->next;
                   delete(temp);
               }
               //else move rest to next
               else
                   rest=rest->next;
           }
           //move to next erm for finding the match
           key=key->next;
       }
    }

    Polynomial *multiplyPolynomial(Polynomial* A, Polynomial* B)

    {
        Node *AF = A->terms->front;
        Polynomial *result= new Polynomial;
        //Every term o f one to be multiplyied with other
        while( AF)
        {
            Node *BF = B->terms->front;
            //Other polynomial
              while( BF!= NULL)
              {
                  result->addTerm(AF->c *BF->c,AF->e+BF->e);
                  BF=BF->next;
              }
              AF=AF->next;
        }
        //If common terms are there add up to simplify
        result->simplifyPolynomial();
        return result;
    }
    void print()
    {
        terms->print();
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Polynomial *p1, *p2;
    p1=new Polynomial;
    p2=new Polynomial;
    int n1,n2,c,e;
    cout<<"Enter number of terms for A";
    cin>>n1;
    
    cout<<"Enter number of terms for B";
    cin>>n2;
    for(int i=0;i<n1;i++)
    {
        cout<<"Enter the coefficnet and exponent(in desceding order) for A's term "<<i<<endl;
        cin>>c>>e;
        p1->addTerm(c,e);
    }

    for(int i=0;i<n2;i++)
    {
        cout<<"Enter the coefficnet and exponent(in desceding order) for B's term "<<i<<endl;
        cin>>c>>e;
        p2->addTerm(c,e);
    }
    cout<<"1->Add 2->Multiply"<<endl;
    int choice;
    cin>>choice;
    if(choice == 1)
    {
        cout<<"Adding of A:"<<endl;
        p1->print();
        cout<<"To B:"<<endl;
        p2->print();
        Polynomial *p3=p1->addPolynomial(p1,p2);
        cout<<endl<<"is :"<<endl;
        p3->print();
    }
    else
    {
        cout<<"Multiply of A:"<<endl;
        p1->print();
        cout<<"To B:"<<endl;
        p2->print();
        Polynomial *p3=p1->multiplyPolynomial(p1,p2);
        cout<<endl<<"is :"<<endl;
        p3->print();

    }
return 0;
}
