/*Your task is to divide the numbers 1,2,…,n into two sets of equal sum.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int64_t n,count=0;
    cin>>n;
    set<int64_t>a1;
    set<int64_t>a2;
    for(int i=1;i<=n;i++){
        a1.insert(i);
        count+=i;
    }
    if(count%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        int64_t half=count/2;
        for(int64_t i=n;i>0;i--){
            if(half-i>=0){
                half-=i;
                a2.insert(i);
                a1.erase(i);
            }
        }
        cout<<a2.size()<<endl;
        for(auto & s:a2){
            cout<<s<<" ";
        }
        cout<<endl;
        cout<<a1.size()<<endl;
        for(auto & s:a1){
            cout<<s<<" ";
        }
    }
    
}