// this problem utilizes DSU, kruskal, inclusion/exclusion of edges; 
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
        parent[s2] = s1; 
        rank[s1] += rank[s2];
      }
    }
  }
};
class Solution {
public:

    int kruskal_mst(int n, vector<vector<int>> edgelist, int block, int include){
        // Main Logic 
        //Init a DSU; 
        DSU s(n); 
        int ans = 0; 
        if(include != -1){
            ans+= edgelist[include][2]; // add its weight to answer; 
            s.unite(edgelist[include][0], edgelist[include][1]);
        }
        for(int i = 0; i<edgelist.size(); i++){
            if(i==block) continue; 
            int w = edgelist[i][2]; 
            int x = edgelist[i][0]; 
            int y = edgelist[i][1];
            // take that edge in MST if it doesn't form a cycle; 
                if(s.find(x) != s.find(y)){
                    s.unite(x, y);
                    ans += w; 
                }
        }
        // Check if all vertices are in the same set (MST is connected)
        for (int i = 0; i < n; i++) {
            if (s.find(i) != s.find(0)) return INT_MAX; // Not connected, return a large value
        }
        return ans; 
    }
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
        vector<vector<int>> answer(2);
        // 1. sort all the edges based upon weight; 
        for(int i = 0; i<edges.size(); i++){
            edges[i].push_back(i); // push the index to keep track of it after sorting;
        }
        sort(edges.begin(), edges.end(), [](auto& a, auto& b){return a[2]<b[2];}); 
        int mst = kruskal_mst(n, edges, -1, -1);

        for(int i = 0; i<edges.size();i++){
            
            if( kruskal_mst(n, edges, i, -1) > mst ) answer[0].push_back(edges[i][3]);
            else if(kruskal_mst(n, edges, -1, i) == mst) answer[1].push_back(edges[i][3]);
        }
        return answer;
    }
};
