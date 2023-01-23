#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=2;i<100;i++){
            if(a%i!=0&&b%i!=0&&c%i!=0){
                cout<<i<<endl;
                break;
            }
        }
    }
}


