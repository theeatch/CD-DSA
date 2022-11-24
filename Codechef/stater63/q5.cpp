#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int64_t i=0;
        for(i;i<s.length();i++){
            if(s[i]=='1')break;
        }
        int64_t count=1;
        for(i;i<s.length();i++){
            if(s[i+1]!='1')break;
            count++;
        }
        if(count%2!=0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}


