#include<iostream>
using namespace std;

int v,e;
static bool graph[101][101];
static bool visited[101];

void dfs(int vertex){
    visited[vertex]=true;
    cout<<vertex<<" ";
    for(int i=1; i<=v; i++){
        if(graph[vertex][i]){
            if(!visited[i]){
                dfs(i);
            }
        }
    }
}

void dfsi(int start){
    for(int i=0; i<101; i++) visited[i]=false;
    int stack[100];
    int top=-1;
    stack[++top]=start;
    visited[start]=true;
    while (top!=-1)
    {
        int vertex=stack[top--];
        cout<<vertex<<" ";
        for(int i=v; i>=1; i--){
            if(graph[vertex][i]){
                if(!visited[i]){
                    visited[i]=true;
                    stack[++top]=i;
                }
            }
        }
    }
}

void bfs(int start){
    for(int i=0; i<101; i++) visited[i]=false;
    int que[100];
    int r=-1, f=0;
    que[++r]=start;
    visited[start]=true;
    int count=1;
    while(f<=r){
        int vertex=que[f++];
        cout<<vertex<<" ";
        for(int i=1; i<=v; i++){

            if(graph[vertex][i]){
                if(!visited[i]){
                    visited[i]=true;
                    que[++r]=i;
                }
            }
        }
        if(--count==0){
            count=r-f+1;
            cout<<endl;
        }
    }
}

int main(){
    cout<<"Enter order of matrix v-e";
    cin>>v>>e;
    cout<<"Enter edges of matrix";
    for(int i=0; i<e; i++){
        int x,y;
        cin>>x>>y;
        graph[x][y]=true;
        graph[y][x]=true;
    }
    dfs(4);
    cout<<endl;
    dfsi(4);
    cout<<endl;
    bfs(4);
}