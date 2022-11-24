#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int64_t n,count=0;
        cin>>n;
        vector<int64_t>arr;
        for(int i=0;i<n;i++){
            int64_t temp;
            cin>>temp;
            if(temp<0){count++;}
            arr.push_back(temp);
        }
        if(count%2==0||count==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}