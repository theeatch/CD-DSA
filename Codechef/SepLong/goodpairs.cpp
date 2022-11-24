#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int64_t n,sum=0,count=-1;
        cin>>n;
	    map <int64_t,int64_t> gp;
        for(int64_t i=0;i<n;i++){
            int64_t temp;
            cin>>temp;
            gp[temp]++;
        }
        for(auto m: gp){
            if(m.second>1){
                sum+=(m.second)*(m.second-1);
            }
        }
        cout<<sum/2<<endl;
	}
	return 0;
}
