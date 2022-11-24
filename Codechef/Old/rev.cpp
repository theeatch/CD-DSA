#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
	int t;
	cin>>t;
    for(int j=0;j<t;j++){
        char c[1000],c2[1000];
        int check=0;
        fflush(stdin);
        gets(c);
        int x = strlen(c);
        for(int i=0;c[i]!='\0';i++){
            c2[i]=c[x-i-1];
        }
        for(int i=0;c[i]!='\0';i++){
            if(c[i]!=c2[i]){
                check=1;
            }
        }
        if(check==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
	return 0;
}
