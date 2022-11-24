#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        long a,b,c,x,y;
        scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);
        if ((x-a)+(y-b)<=c)
        {
            printf("YES \n ");
        }
        else
        {
            printf("NO \n");
        }
        t--;
    }
    return 0;
}