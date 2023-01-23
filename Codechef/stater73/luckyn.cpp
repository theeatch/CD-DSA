/*Chef calls a number lucky if it contains the digit 77 at least once.

Given a number XX, determine if it is a lucky number or not.*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int64_t num,flag=0;
        cin>>num;
        while(num>0){
            if(num%10==7){
                flag=1;
                break;
            }
            num/=10;
        }
        if(flag==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


