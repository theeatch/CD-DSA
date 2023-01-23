/*You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?*/


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