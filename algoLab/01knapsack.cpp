#include<bits/stdc++.h>
using namespace std;
 
int knapsack(int W, int net[], int val[], int n){
    int dp[n+1][W+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(net[i-1]<=j){
                dp[i][j]=max(val[i-1]+dp[i-1][j-net[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    for (int i = 0; i <= n; i++) { 
        for (int j = 0; j <= W; j++) 
            cout<<dp[i][j]<<" "; 
        cout<<endl; 
    }
    return dp[n][W];
}

int main(){
    int n,w;
    cout<<"Enter the number of items: ";

    cin>>n;
    int net[n],val[n];
    cout<<"Enter the net weight and value of each item: ";

    for(int i=0;i<n;i++){
        cin>>net[i]>>val[i];
    }

    cout<<"Enter the Capacity of Knapsack: ";
    cin>>w;
    
    cout<<"Maximum value that can be obtained is: "<<endl<<knapsack(w,net,val,n)<<endl;
}


