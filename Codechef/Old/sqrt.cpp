#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
	int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int j=0;
    for(j;j<n;)
    {
        for(long int i=0;i<6400000;i++)
        {
            if ((i*i)<(arr[j]+2) && (i*i)>(arr[j]-2))
            {
                cout<<i<<endl;
                j++;
            }
        }
	
    }
    return 0;
}
