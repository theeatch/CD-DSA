#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<n; i++)
    {
        int min=i-1;
        for(int j=i; j<n; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[i-1];
        arr[i-1]=arr[min];
        arr[min]=temp;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}