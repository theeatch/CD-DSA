#include<bits/stdc++.h>
using namespace std;
int gcd(int64_t a, int64_t b) // The function runs recursive in nature to return GCD  
{  
    if (b == 0) // if b becomes 0 return a   
        return a;  
    return gcd(b, a % b); // divide to a by b to make smaller number   
       
}  
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int64_t a,b;
        cin>>a>>b;
        int64_t c=gcd(a,b);
        cout<<c<<endl;
    }
}


