#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); //line1
    cin.tie(NULL);     
    int64_t t;
    cin>>t; //the number of times you want to run the code.
    while(t--){
        int x;
        cin>>x;
        int arr[x];
        for(int i=0;i<x;i++){
            cin>>arr[i];
        }
        cout<<"the array is \n";
        for(int i=0;i<x;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        cout<<"sorted array\n";
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                if(arr[i]<arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(int i=0;i<x;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}


