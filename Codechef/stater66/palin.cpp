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
        int64_t arr[n];
        for(int64_t i=0; i<n; i++){
            cin>>arr[i];
        }
        int64_t j=n-1,i=0;
        if(n==1){
            cout<<0<<endl;
            break;
        }
        else{
        while(j>i){
            if(arr[i]==arr[n-1]){
                j--;
                arr[n-1]=arr[j];
                i++;   
            }
            else{
                arr[n-1]=abs(arr[n-1]-arr[i]);
                i++;
                ans++;
            }
        }
        cout<<ans<<endl;
        }
    }
}


