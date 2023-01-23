#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int c=1;
        for(int i=0;i<x;i++){
            for(int j=0;j<=i;j++){
                cout<<c<<" ";
                c++;
            }
            cout<<"\n";
        }
    }
}


