#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std; 
// DSU data stducture; 
// Path compression + Union By Rank

class DSU{
  int *parent; 
  int *rank; 
public: 
  DSU(int n){
    parent = new int[n]; 
    rank = new int[n]; 
    // parent -1, rank = 1; 
    for(int i = 0; i<n; i++){
      parent[i]=-1; 
      rank[i]=1;
    }
  }
  // Find Function 
  int find(int i){
    // base case; 
    if(parent[i] == -1){
      return i; 
    }
    // otherwise; 
    return parent[i] = find(parent[i]);
  }
  // unite
  void unite(int x, int y){
    int s1 = find(x); 
    int s2 = find(y);
    if(s1!=s2){
      // union by rank
      if(rank[s1] < rank[s2]){
        parent[s1] = s2; 
        rank[s2] += rank[s1]; 
      }
      else{
        pparent[s2] = s1; 
        rank[s1] += rank[s2];
      }
    }
  }
};
class Graph{
  vector<vector<int>> edgelist;
  int V;
public:
  Graph(int v){
    this->V = V; 
  }
  void addEdge(int x, int y, int w){
    edgelist.push_back({w, x, y});
  }
  int kruskal_mst(){
    // Main Logic 
    // 1. sort all the edges based upon weight; 
    sort(edgelist.begin(), edgelist.end()); 
    //Init a DSU; 
    DSU s(V); 
    
    int ans = 0; 
    for(auto edge : edgelist){
      int w = edge[0]; 
      int x = edge[1]; 
      int y = edge[2];
      // take that edge in MST if it doesn't form a cycle; 
      if(s.find(x) != s.find(y)){
        s.unite(x, y);
        ans += w; 
      }
    }
    return ans; 
  }
};
int main(){
  int n, m; 
  cin >> n >> m; 
  Graph g(n); 
  for(int i = 0; i<m; i++){
    int x, y, w; 
    cin >> x >> y >> w; 
    g.addEdge(x-1, y-1, w); 
  }
  cout << g.kruskal_mst << endl;
  return 0; 
}
