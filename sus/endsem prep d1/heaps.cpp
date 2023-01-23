#include<iostream>
using namespace std;

void createheap(int arr[], int n){
    for(int i=2; i<=n; i++){
        int item=arr[i];
        int child=i;
        int parent=i/2;
        while(parent!=0 && item>arr[parent]){
            arr[child]=arr[parent];
            child=parent;
            parent=child/2;
        }
        arr[child]=item;
    }
}

int deleteheap(int arr[], int *n){
    int item=arr[*n];
    arr[*n]=arr[1];
    *n=*n-1;
    int parent=1;
    int child=2*parent;
    while (child<=*n)
    {
        if(child<*n){
            if(arr[child+1]>arr[child]) child++;
        }
        if(item>=arr[child]) break;
        arr[parent]=arr[child];
        parent=child;
        child=2*parent;
    }
    arr[parent]=item;
    return arr[*n+1];
}

void sortheap(int arr[], int n){
    int ori=n;
    while (n)
    {
        deleteheap(arr,&n);
    }
    for(int i=1; i<=ori; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++) cin>>arr[i];
    createheap(arr,n);
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    // while(n)
    // cout<<deleteheap(arr,&n)<<" ";
    sortheap(arr, n);
}