#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(z>=y)cout<<x<<endl;
        else{
            int i=1;
            for(i;i<y;i++){
                if(z*i>=y)break;
            }
            cout<<i*x<<endl;
        }
    }
}


