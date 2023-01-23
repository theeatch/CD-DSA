#include<iostream>
using namespace std;

class node{
    public:
    int ele;
    node* next;
    node(int val){
        ele=val;
        next=NULL;
    }
};
class list{
    public:
    node* head=NULL;
    node* tail=NULL;
    void insert(int ele){
        if(head==NULL){
            head=new node(ele);
            tail=head;
            return;
        }
        tail->next=new node(ele);
        tail=tail->next;
    }
};

int largest(int arr[], int n){
    int large=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    return large;
}

void radix(int arr[], int n){
    int big=largest(arr,n);
    list p[10];
    for(int i=1; big/i>0; i*=10){
        for(int j=0; j<n; j++){
            int digit=arr[j]%(i*10);
            digit/=i;
            p[digit].insert(arr[j]);
        }
        int counter=0;
        for(int j=0; j<9; j++){
            while(p[j].head){
                arr[counter++]=p[j].head->ele;
                p[j].head=p[j].head->next;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    radix(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}