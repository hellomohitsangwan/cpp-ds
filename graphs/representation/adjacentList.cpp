#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n  , e;  //n means nodes and m means edges
  cin>>n>>e;

  vector<int> adj[n+1];

  for(int i = 1 ; i < n+1 ; i++) {
      int u , v; cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
  }

}