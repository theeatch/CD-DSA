#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t n,m;
    cin>>n>>m;
    int64_t mod=1;
    for(int64_t i=0;i<n-1;i++){
        mod=(mod*m)%998244353;
    }
    int64_t ans=m+mod-1;
    cout<<ans<<endl;
    
}


