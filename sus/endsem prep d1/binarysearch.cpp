#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int ele;
    cin>>ele;
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==ele){
            cout<<mid+1;
            break;
        }
        else if(arr[mid]>ele){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
}