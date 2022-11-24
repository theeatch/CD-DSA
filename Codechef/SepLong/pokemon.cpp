#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int64_t n,count=1;
		cin>>n;
		int64_t ground[n];
		for(int64_t i=0;i<n;i++){
			cin>>ground[i];
		}
		int64_t water[n];
		for(int64_t i=0;i<n;i++){
			cin>>water[i];
		}
		vector<pair<int64_t,int64_t>>ans;
		for(int64_t i=0;i<n;i++){
			ans.push_back(make_pair(ground[i],water[i]));
		}
		sort(ans.rbegin(),ans.rend());
		int64_t check=ans[0].second;
		for(int64_t i=1;i<n;i++){
			if(ans[i].second>check){
				count++;
				check=ans[i].second;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
