#include <bits/stdc++.h>
using namespace std;
const int MAXN=100;
int graph[MAXN][MAXN];
int maxclique[MAXN];
int maxCliqueSize=0;

bool isSafe(int v, int clique[], int size){
    for(int i=0;i<size;i++){
        if(graph[v][clique[i]]==0){
            return false;
        }
    }
    return true;
}

void findMaxClique(int clique[], int size, int v, int n){
    if(v==n){
        if(size>maxCliqueSize){
            maxCliqueSize=size;
            for(int i=0;i<size;i++){
                maxclique[i]=clique[i];
            }
        }
        return;
    }
    if(isSafe(v,clique,size)){
        clique[size]=v;
        findMaxClique(clique,size+1,v+1,n);
    }
    if(n-v>maxCliqueSize-size){
        findMaxClique(clique,size,v+1,n);
    }
}

int main(){
    
    int n;
    cout<<"Enter the number of vertices: ";
    cin>>n;
    cout<<"Enter the adjacency matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    int clique[MAXN];
    findMaxClique(clique,0,0,n);

    cout<<"Maximum clique size is: "<<maxCliqueSize<<endl;
    cout<<"Maximum clique contains vertices : ";
    for(int i=0;i<maxCliqueSize;i++){
        cout<<maxclique[i]<<" ";
    }
}