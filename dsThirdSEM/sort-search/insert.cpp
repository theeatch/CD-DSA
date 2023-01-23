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
        for(int i=1;i<x;i++){
            int key=arr[i];
            int j=i-1;
            while(j>=0&&arr[j]>key){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
        for(int i=0;i<x;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}


