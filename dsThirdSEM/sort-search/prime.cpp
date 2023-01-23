#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int x,c=1;
        cin>>x;
        for(int i=2;i<x;i++){
            if(x%i==0){
                c=-1; break;
            }
        }
        if(c==-1){
        cout<<"Not a prime number"<<endl;
        }
        else{
        cout<<"prime number"<<endl;
        }
    }
}


