#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int64_t n, no1=0;;
        cin>>n;
        int64_t arr[n];
        for(int64_t i=0; i<n; i++){
            cin>>arr[i];
            no1+=arr[i]%998244353;
        }
        cout<<no1*(no1-1)<<endl;
    }
}

