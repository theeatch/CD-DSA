
#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
  //suppose n=7 that is prime and its pair are (1,7)
  //so if a no. is prime then it can be check by numbers smaller than square root
  // of the n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int64_t x;
        cin>>x;
        if(isPrime(x))cout<<-1<<endl; //it its prime, we cannot get 3 distint integers out of the question.
        else{
            int a;
            for(int i=2;i<x;i++){
                if(x%i==0){
                    a=i;
                    break;
                }
            }
            if(x/a==a)cout<<-1<<endl; //let the answer be 1,a,x/a.
            else cout<<1<<" "<<a<<" "<<x/a<<endl;
            }
        }
}



