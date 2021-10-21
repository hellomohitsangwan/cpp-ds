#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//traversing the adjacent nodes and after we move to next node
vector<int> bfsOfGraph(int n , vector<int> adj[]) {
    //n : total no. of nodes
    //adj : total no. of edges
    vector<int> bfs;
    vector<bool> isVisited{0};
    queue<int> q;
    
    q.push(1); //starts from 1
    isVisited[1] = 1;
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        bfs.push_back(curr);
        for(int i  = 0 ; i < adj[curr].size() ; i++) {
           if(!isVisited[adj[curr][i]]) {
               q.push(adj[curr][i]);
               isVisited[adj[curr][i]] = 1;
           }
        }
    } return bfs;
}
int main() {
  
}