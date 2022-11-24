#include<bits/stdc++.h>
using namespace std;

int main(){
    int64_t t;
    cin>>t;
    while(t--){
        int64_t x,y;
        cin>>x>>y;
        if(x%2!=0&&y%2!=0) cout<<"No"<<endl;
        else if(x==1||y==1)cout<<"No"<<endl;
        else{
            cout<<"Yes"<<endl;
        }
    }
}