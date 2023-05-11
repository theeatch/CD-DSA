#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20;

int n;
int graph[MAXN][MAXN];
int best_path[MAXN];
bool visited[MAXN];
long long best_cost = LLONG_MAX;
long long curr_cost = 0;

void tsp(int pos){
    if(pos == n){
        if(graph[best_path[n-1]][best_path[0]] != 0){
            curr_cost += graph[best_path[n-1]][best_path[0]];
            if(curr_cost < best_cost){
                best_cost = curr_cost;
            }
            curr_cost -= graph[best_path[n-1]][best_path[0]];
        }
        return;
    }
    for(int i = 0; i < n; i++){
        if(!visited[i] && graph[best_path[pos-1]][i] != 0){
            visited[i] = true;
            best_path[pos] = i;
            curr_cost += graph[best_path[pos-1]][i];
            tsp(pos+1);
            curr_cost -= graph[best_path[pos-1]][i];
            visited[i] = false;
        }
    }
}

int main(){
    cout<<"enter the number of vertices: ";
    cin>>n;
    cout<<"enter the adjacency matrix: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>graph[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        best_path[i] = -1;
        visited[i] = false;
    }
    best_path[0] = 0;
    visited[0] = true;
    tsp(1);
    if(best_cost == LLONG_MAX){
        cout<<"No Hamiltonian cycle exists"<<endl;
    }
    else{
        cout<<"The best Hamiltonian cycle is: ";
        for(int i = 0; i < n; i++){
            cout<<best_path[i]<<" ";
        }
        cout<<endl;
        cout<<"The cost of the best Hamiltonian cycle is: "<<best_cost<<endl;
    }
    return 0;
}
