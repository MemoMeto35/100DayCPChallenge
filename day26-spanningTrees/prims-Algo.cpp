#include<iostream>
#include<vector>
#include<queue>
using namespace std; 
class Graph{
  // Adjacency List
  vector<pair<int, int>> *l; 
  int V; 
public: 
  Graph(int n){
    V = n; 
    l = new vector<pair<int, int>>[n];
  }
  void add Edge(int x, int y, int w){
    l[x].push_back({y, w});
    l[y].push_back({x, w});
  }
  int prim_mst(){
    // Init a Min heap
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int>>> minHeap;
    // visited array that denotes whether a node has been include in MST or not; 
    bool *vis = new bool[V]{0};
    int ans = 0;
    //begin
    minHeap.push({0,0}); // weight, node
    while(!minHeap.empty()){
      // pick out the edge with min weight; 
      auto best = minHeap.top(); 
      minHeap.pop();
      
      int weight = best.first; 
      int to = best.second; 
      if(visited[to]){
        //discard the edge, and continue; 
        continue; 
      }
      // otherwise take the current edge; 
      ans+= weight; 
      vis[to] = 1; 
      // add the new edges in the queue; 
      for(auto edge : l[to]){
        if(vis[edge.first==0){
          minHeap.push({edge.second, edge.first});
        }
      }
    }
    return 0;
  }
};

int main(){
  int n, m; 
  cin >> n >> m; 
  Graph g(n); 
  for(int i = 0; i<m; i++){
    int x, y, w; 
    cint >> x  >> y>>w; 
    graph.addEdge(x-1, y-1, w);
  }
  cout << g.prim_mast() << endl; 
}
