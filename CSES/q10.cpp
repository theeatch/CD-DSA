#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);   

    int64_t n;
    cin>>n;

    int64_t count=0;
    while(n>=5){
        count+= n/5;
        n/=5;
    }
    cout<<count<<"\n";
    return 0;
    
}


