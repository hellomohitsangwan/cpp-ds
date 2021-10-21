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
    
    //if it's connected graph
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

    //if it's not a conected graph
    // for (int i = 1; i <= n; i++)  //just checking for each and every node in graph
    // {
    // q.push(i); //starts from 1
    // isVisited[1] = 1;
    // while(!q.empty()) {
    //     int curr = q.front();
    //     q.pop();
    //     bfs.push_back(curr);
    //     for(int j  = 0 ; j < adj[curr].size() ; j++) {
    //        if(!isVisited[adj[curr][i]]) {
    //            q.push(adj[curr][i]);
    //            isVisited[adj[curr][i]] = 1;
    //        }
    //     }
    // } return bfs;
    // }
    

}
int main() {
  
}