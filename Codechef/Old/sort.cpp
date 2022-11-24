#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp=0;
	int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for (int i=n;i>0;i--)
    {
        for (int i=0;i<(n-1);i++)
        {
            if (arr[i]>arr[i+1])
            {
                temp = arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
           
        }

    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
	return 0;
}
