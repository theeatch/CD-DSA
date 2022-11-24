#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int64_t n,k,ans=0;
        cin>>n>>k;
        int64_t arr[n];
        for(int64_t i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int64_t i=0;i<n-1;i++){
            if (arr[i]==k)ans=-1;
        }
        if(ans==-1)cout<<"YES"<<endl;
        else if(n%2!=0&&arr[n/2]==k)cout<<"YES"<<endl;
        else if(n%2==0&&arr[(n/2)-1]==k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


