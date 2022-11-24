#include<bits/stdc++.h>
using namespace std;
 
int64_t fact(int64_t n){
    if(n==1)return 1;
    else return n*fact(n-1);
}

int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int64_t n,sum=0;
        cin>>n;
        int64_t a[n];
        for(int64_t i=0; i<n;i++){
            cin>>a[i];
            sum+=fact(a[i]);
        }
        cout<<sum<<"\n";
        
    }
}


