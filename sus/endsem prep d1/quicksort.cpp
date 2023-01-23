#include<iostream>
using namespace std;

void quicksort(int arr[], int start, int end){
    if(start>=end) return;
    int low=start;
    int pivot=start;
    int n=end;
    start++;
    while(end>=start){
        while(!(arr[start]>arr[pivot]) && start<n+1){
            start++;
        }
        while(!(arr[end]<arr[pivot]) && end>low){
            end--;
        }
        if(end>start){
            swap(arr[end],arr[start]);
        }
    }
    swap(arr[end],arr[pivot]);
    quicksort(arr, low, end-1);
    quicksort(arr, end+1, n);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quicksort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}