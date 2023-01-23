/*The doctor prescribed Chef to take a multivitamin tablet 33 times a day for the next XX days.

Chef already has YY multivitamin tablets.

Determine if Chef has enough tablets for these XX days or not.*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int64_t X,Y;
        cin>>X>>Y;
        if(Y>=(3*X))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


