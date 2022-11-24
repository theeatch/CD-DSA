#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int64_t n;
        cin>>n;
        if(n==2){
            char arr[2];
            cin>>arr;
            cout<<arr<<endl;
        }

        else{
            int64_t count=0,count1=0;
            // vector<int>s1,s2;
            char arr[n];
            cin>>arr;
            for(int64_t i=0;arr[i]!='\0';i++){
                 if(arr[i]=='0')count++;
                 else count1++;
            }
            for(int i=0;i<count;i++){
                cout<<0;
            }
            for(int i=0;i<count1;i++){
                cout<<1;
            }
            
            
    
        cout<<endl;
        }
    }
}