#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int64_t a,b,ans=0;
        cin>>a>>b;
        int64_t x=a+b;
        for(int i=2;i<x;i++){
            if(x%i==0){ans=-1;
            break;}            
        }
        if(ans==-1)cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
}


