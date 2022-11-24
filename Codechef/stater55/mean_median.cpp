#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int mean, median ;
        cin >> mean >> median ;
        
        cout << -501 << " " << median << " " << (3*mean)+501-median << endl ;
        
    }
    
    
    return 0;
}