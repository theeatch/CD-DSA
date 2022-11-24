#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t n,count=0;
    cin>>n;
    int64_t arr[n];
    for (int64_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int64_t i=0;i<n;i++)
    {
        if(arr[i+1]<arr[i]){
            count+=arr[i]-arr[i+1];
            arr[i+1]+=arr[i]-arr[i+1];
        }
    }
    
    cout<<count;
    
    
}