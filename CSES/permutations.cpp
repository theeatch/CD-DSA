/*A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int64_t n;
    cin>>n;
    if(n<4&&n>1){
        cout<<"NO SOLUTION";
    }
    else if(n==1){
        cout<<1;
    }
    else{
        for(int64_t i=n;i>0;i--){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
        for (int64_t i = n; i >0; i--)
        {
            if(i%2==0){
                cout<<i<<" ";
            }
        }
        
    }
}