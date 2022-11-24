#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t t;
    cin>>t;
    while(t--){
        int64_t n;
        cin>>n;
        map<int64_t,int64_t>alist;
        vector<int64_t>check;
        for(int i=0;i<n;i++){
            int64_t temp;
            cin>>temp;
            alist[temp]++;
            check.push_back(temp);
        }
        int n2;
        cin>>n2;
        for(int64_t i=0;i<n2;i++){
            int64_t temp;
            cin>>temp;
            alist[temp]++;
        }
        for(auto s:alist){
            if(s.second>1){
                alist.erase(s.first);
            }
        }
        for(int64_t i=0;i<n;i++){
            if(alist.find(check[i])==alist.end());
            else{
                cout<<check[i]<<" ";
            }
            
        }
        cout<<endl;
        }

	return 0;
}
