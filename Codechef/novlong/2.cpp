#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(b-a>0){
            if(x>=(b-a)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else {
            if(y>=(a-b)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}


