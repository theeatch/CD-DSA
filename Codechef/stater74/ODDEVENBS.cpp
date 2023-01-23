#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int64_t n,countOne=0,countZero=0;
        cin>>n;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            if(temp==0)countZero++;
        }
        if(countZero%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


