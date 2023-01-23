/*A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

    

Your task is to find out the number in row y and column x.*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int64_t t;
    cin>>t;
    while(t>0){
        int64_t m,n;
        cin>>m>>n;
        if(m-n<=0 && n%2!=0){
            cout<<(n*n)-n+1+(n-m)<<endl;
        }
        else if(m-n<=0 && n%2==0){
            cout<<(n*n)-n+1-(n-m)<<endl;
        }
        else if(m-n>0 && m%2!=0){
            cout<<(m*m)-m+1-(m-n)<<endl;
        }
        else if(m-n>0 && m%2==0){
            cout<<(m*m)-m+1+(m-n)<<endl;
        }
        t--;
    }
}