#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;
const int INF = 1e9;

int n;
int p[MAXN];
int dp[MAXN][MAXN];

int matrixChainMultiplication() {
    for(int i=1; i<=n; i++) {
        dp[i][i] = 0;
    }
    for(int len=2; len<=n; len++) {
        for(int i=1; i<=n-len+1; i++) {
            int j = i+len-1;
            dp[i][j] = INF;
            for(int k=i; k<j; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n; j++) 
            cout<<dp[i][j]<<" "; 
        cout<<endl; 
    }
    return dp[1][n];
}

int main() {
    cout << "Enter the number of matrices: ";
    cin >> n;
    cout << "Enter the dimensions of matrices: ";
    for(int i=0; i<=n; i++) {
        cin >> p[i];
    }
    int ans = matrixChainMultiplication();
    cout << "Minimum number of multiplications required: " << ans << endl;
    return 0;
}
