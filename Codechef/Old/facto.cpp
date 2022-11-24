#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int fact()
{
    int f;
    cin >> f;
    int count =1;
    for (int i=1;i<=f;i++)
    {
        
        count = count*i;
        
    }
    cout << count << endl;
    return 0;
}

int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        fact();
    }
}