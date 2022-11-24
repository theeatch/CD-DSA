#include <bits/stdc++.h>
using namespace std;
int facto(int64_t K){
    int fact=1;
    for(int i=1;i<K;i++){
        fact*=i;
    }
    return fact;
}
int main() {
	int64_t t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        if(facto(K)<N||(N==1&&K==1)){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl; 
        }    
        }

	return 0;
}
