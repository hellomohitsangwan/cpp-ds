#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool isCycle(int n , vector<int> adj[]) {
    //n : total no. of nodes
    //adj : total no. of edges
    vector<bool> isVisited(n+1 , 0);


    //if it's not a conected graph
    for (int i = 1; i <= n; i++)  //just checking for each and every node in graph
    {
        queue<pair<int , int>> qn;
    qn.push({i , -1}); //starts from 1
    isVisited[i] = 1;
    while(!qn.empty()) {
        int curr = qn.front().first;
        qn.pop();
        // bfs.push_back(curr);
        for(int j  = 0 ; j < adj[curr].size() ; j++) {
           if(isVisited[adj[curr][i]] && adj[curr][i] != qn.front().second) {
               //cycle detected bec. the last node is visited 
            //    each pair consists the node which is added and by whom it is added or Visited
            // if current node is already visited by any node other than current node  then we can say it has cycle
               return true;
           }
           else if(!isVisited[adj[curr][i]]) {
               qn.push({adj[curr][i] , curr});
           }
        }
    } return false;
    }
    

}

int main() {
  
}