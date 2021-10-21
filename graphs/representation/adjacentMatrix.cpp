#include<iostream>
using namespace std;

int main() {
  int n  , e;  //n means nodes and m means edges
  cin>>n>>e;

  //adjjacent matrix (tota n+1 size bec. indexing is from 1)
  int adj[n+1][n+1];

  for(int i = 1 ; i <= e ; i++) {
      int u,v; cin>>u>>v;
      //bidirectional graph
      adj[u][v] = 1;
      adj[v][u] = 1;
  }

}