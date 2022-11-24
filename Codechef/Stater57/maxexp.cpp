#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int64_t n;
        cin>>n;
        string exp;
        cin>>exp;
        vector<int64_t>no;
        vector<char>a1,a2;
        for(int64_t i=0;exp[i]!='\0';i++){
            if(isdigit(exp[i]))no.push_back(exp[i]);
            else a1.push_back(exp[i]);
        }
        sort(a1.begin(),a1.end(),greater<char>());
        sort(no.begin(),no.end());
        for(int64_t i=0;i<n;i++){
            if(i<no.size()){
                a2.push_back(no[i]);
            }
            if(i<a1.size()){
                a2.push_back(a1[i]);
            }
        }
        for(int64_t i=n-1;i>=0;i--){
            cout<<a2[i];
        }
    cout<<endl;
    }
}