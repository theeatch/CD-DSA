/*
Chef has an array A of length N.
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int64_t N,Y;
        cin>>N>>Y;
        int64_t checkX=0,X;
        int64_t arr[N];
        for(int i=0;i<N;i++){
            int64_t temp;
            cin>>temp;
            arr[i]=temp;
            checkX = checkX|temp;
        }
        int64_t checkY=Y-checkX;
        if((checkY&Y)==checkY)cout<<checkY<<endl;
        else cout<<-1<<endl;
    }
}


