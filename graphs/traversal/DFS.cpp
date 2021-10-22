#include<iostream>
#include<vector>
using namespace std;

void DFS_of_graph(int n , vector<int> adj[]) {
    vector<bool> isVisted(n+1 , 0);
    vector<int> dfsOrder;
    for(int i = 1 ; i <= n ; i++) {
        if(!isVisted[i]) {
            //call the dfs function
            dfs(i , adj , isVisted , dfsOrder);
        }
    }
}

vector<int> dfs(int node , vector<int> adj[] , vector<bool> &isVisited , vector<int> &store) {
    store.push_back(node);
    isVisited[node] = 1;
    for(auto e:adj[node]) {
        if(!isVisited[e]) {
            dfs(e , adj , isVisited , store);
        }
    } return store;
}

int main() {
  
}