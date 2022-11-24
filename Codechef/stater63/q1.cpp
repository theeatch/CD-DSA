#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(2*x>5*y)cout<<"Chocolate"<<endl;
        else if(2*x==5*y)cout<<"Either"<<endl;
        else cout<<"Candy"<<endl;
    }
}


