#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int ele;
    cin>>ele;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==ele)
        {
            cout<<i+1;
        }
    }
} 