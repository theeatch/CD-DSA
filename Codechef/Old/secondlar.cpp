#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int slarg()
{
    vector<int>s(3);
    for(int i=0;i<3;i++)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    cout << s[1] << endl;
    return 0;
}

int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        slarg();
    }
}