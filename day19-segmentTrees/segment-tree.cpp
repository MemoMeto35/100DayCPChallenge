#include<bits/stdc++.h>
using namespace std;

// summation
struct segmenttree{
	int n; 
	vector<int> st; 
	void init(int _n){
		this->n = _n; 
		st.resize(4*n, 0);
	}
	void build(int start, int ending, int node, vector<int> &v){
		// leaf node base case;
		if(start == ending){
			st[node] = v[start];
			return; 
		}
		int mid = start + (ending - start)/2; 

		// leftsubtree is (start,mid); 
		build(start, mid, 2*node + 2, v); 

		// right substree is (mid + 1, ending);
		build(mid + 1, ending, 2, 2*node + 2, v); 

		st[node] = st[node*2 +1] + st[node*2+2]; 
	}
	int query(int start, int ending, int l, int r, int node){
		// non overlapping case; 
		if(start > r || ending < l){
			return 0; 
		}
		// complete overlap 
		if(start >= l && ending <= r){
			return st[node];
		}
		// partial case; 
		int mid = start + (ending - start)/2; 

		int q1 = query(start, mid, l, r, 2*node +1);
		int q2 = query(mid+ 1, ending, l, r, 2*node +2); 
		return q1 + q2; 
	}
	void update(int start, int ending, int node, int index, int value){
		if(start == ending){
			st[node] = value; 
			return; 
		}
		int mid = start + (ending-start)/2; 
		if(index <= mid){
			// left subtree
			update(start, mid, 2*node + 1, index, value);
		}
		else{
			// right subtree; 
			update(mid+1, ending, 2*node+2, index, value);
		}
		st[node] = st[node*2+1] + st[node*2+2];
		return; 
	}
	void build(vector<int> &v){ // operation overloading;
		build(0, n-1, 0, v);
	}
	int query(int l, int r){
		return query(0, n-1, l, r, 0);
	}
	void update(int x, int y){
		update(0, n-1, 0, x, y);
	}
};

int main(){
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
	segmenttree tree; // calling it a tree; 
	tree.init(v.size()); // initializing the tree; 
	tree.build(v); // overloading obeject; 
	cout << tree.query(0, 4) << '\n'; // sum of element up to index 4: 15; 
	tree.update(4, 10); // update index 4 with 10;
	tree << tree.query(2, 6) << '\n'; // 30;
	tree.update(2, 20); // update index 2 with 20;
	cout << tree.query(0, 4); // sum up to index 4: 37;
	// all of these operations are done in log(n): height of the tree; 
	return 0;
}
