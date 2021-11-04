#include<iostream>
#include<vector>
#include<queue>
using namespace std;


void BFS(vector<int> adj[] , int src , int n) {
    queue<int> q;
    vector<int> dist(n , INT_MAX);
    q.push(src);
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        for(auto e : adj[node]) {
            if(dist[e] > dist[node] + 1) {  //lesser possibe dist. found
                dist[e] = dist[node] + 1;
                q.push(e);
            }
        }
    }
    for(auto e : dist) {
        cout<<e<< " ";
    }
}

int main() {
  
}