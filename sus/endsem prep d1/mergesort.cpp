#include<iostream>
using namespace std;

void merger(int arr[], int start, int mid, int end){
    int it1=start;
    int it2=mid+1;
    int counter=start;
    int temp[end+1];
    while(it1<=mid && it2<=end){
        if(arr[it1]<arr[it2]){
            temp[counter++]=arr[it1++];
        }
        else temp[counter++]=arr[it2++];
    }
    while(it1<=mid){
        temp[counter++]=arr[it1++];
    }
    while(it2<=end){
        temp[counter++]=arr[it2++];
    }
    for(int i=start; i<=end; i++){
        arr[i]=temp[i];
    }
}

void mergesort(int arr[], int start, int end){
    if(start<end){
        int mid=(start+end)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merger(arr,start, mid, end);
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    mergesort(arr, 0, n-1);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}