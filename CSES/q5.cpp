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