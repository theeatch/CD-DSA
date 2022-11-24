#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int64_t n;
        cin>>n;
        int64_t arr[n];
        for(int64_t i=0;i<n;i++){
	        cin>>arr[i];
	    }   
	    sort(arr,arr+n);
        int64_t arr2[3]={arr[0]*arr[0],arr[n-1]*arr[n-1],arr[0]*arr[n-1]};
        int64_t* it=min_element(arr2,arr2+3);
        int64_t* it2=max_element(arr2,arr2+3);
        cout<<*it<<" "<<*it2<<endl;
	}
	return 0;
}
