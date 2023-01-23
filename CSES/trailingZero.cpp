/*Your task is to calculate the number of trailing zeros in the factorial n!.

For example, 20!=2432902008176640000 and it has 4 trailing zeros.
*/

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


