#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


