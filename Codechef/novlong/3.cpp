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
        string s;
        cin>>s;
        map<char,int64_t>check;
        for(int64_t i=0;s[i]!='\0';i++){
            check[s[i]]++;
        }
        int64_t start=check.begin()->second;
        for (auto s:check){
            if(s.second!=start){
                ans=-1;
            }
        }
        if(ans==0&&start>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}


