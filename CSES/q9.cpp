#include<bits/stdc++.h>
using namespace std;
const int64_t M = 1000000007;

int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    int64_t ans=1;
    for(int i=1;i<=t;i++){
        ans = ans*2 %M;
    }
    cout<<ans;
}


