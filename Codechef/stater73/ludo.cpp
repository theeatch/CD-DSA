/*Chef is playing Ludo. According to the rules of Ludo, a player can enter a new token into the play only when he rolls a 66 on the die.

In the current turn, Chef rolled the number XX on the die. Determine if Chef can enter a new token into the play in the current turn or not.*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x==6)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


