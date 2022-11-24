#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // line1
    cin.tie(NULL);
    int64_t t;
    cin >> t;
    while (t--)
    {
        int64_t n;
        cin >> n;
        int64_t arr[n];
        for (int64_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int64_t, int64_t> m;
        for (int64_t i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        int64_t maxValue = INT_MIN;
        for ( auto entry : m)
        {
            if (maxValue < entry.second)
            {
                maxValue = entry.second;
            }
        }
        vector<int64_t>s;
        for(int64_t j=0;j<n;j++){
            if()
        }
        if(maxValue>=3){
            cout<<n-maxValue<<endl;
        }
        else cout<<n-2<<endl;
    }
}
