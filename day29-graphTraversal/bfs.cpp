#include<iostream> 
#include<list> 
#include<queue> 
using namepspace std; 
class Graph{
  int V; 
  list<int> *l; 
public: 
  Graph(int v){
    V = v; 
    l = new list<int>[V]; 
  }
  void addEdge(int i, int j, bool undir= true){
    l[i].push_back(j); 
    if(undir){
      l[j].push_back(i); 
    }
  }
  void bfs(int source){
    queue<int> q; 
    bool * visited = new bool[V]{0};
    q.push(source); 
    visited[source] = true; 
    while(!q.empty()){
      // explore the top of the q neighbors; 
      int f= q.front(); 
      cout << f << endl; // yoy can also store f in someother array; 
      q.pop(); 
      // push the nbrs of the current node inside qu if the are not already seen;  
      for(auto nbr : l[f]){
        if(!visited[nbr]){
          q.push(nbr); 
          visited[nbr] = true; 
        }
      }
    }
  }
};
int main(){
  Graph g(7); 
  g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.addEdge(5,6);
	g.addEdge(4,5);
	g.addEdge(0,4);
	g.addEdge(3,4);
	g.bfs(1);
	return 0;
  
}
