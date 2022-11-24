#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>t(110);
    for(int i=0;t[i]<100;i++){
        cin>>t[i];
        if(t[i]==42){
            break;
        }
        cout<<t[i]<<endl;
    }
	return 0;
}
