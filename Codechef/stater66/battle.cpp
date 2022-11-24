    #include<bits/stdc++.h>
    using namespace std;
    
    int main(){
        ios_base::sync_with_stdio(false); //line1
        cin.tie(NULL);     
        int64_t t;
        cin>>t;
        while(t--){
            int64_t n,a,b,i=0;
            cin>>n>>a>>b;
            while(n!=1){
                n=n/2;
                i++;
            }
            cout<<(i*a)+((i-1)*b)<<endl;
        }
    }


