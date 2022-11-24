#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int64_t n,ans=0;
        cin>>n;
        map<int64_t,int64_t>t;
        for(int64_t i=0; i<2*n; i++){
            int64_t temp;
            cin>>temp;
            t[temp]++;
        }
        for( auto s:t){
            if(s.second>2)ans=-1;
        }
        if(ans==-1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}


