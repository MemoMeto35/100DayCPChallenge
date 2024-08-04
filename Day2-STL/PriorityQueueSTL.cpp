#include <iostream>
#include <queue>
using namespace std;

int main(){
// initialize a piority queue
  priority_queue<int> pq;
  
    // initialize pq with pairs and assending order
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // create a priority queue with an assending order
  // creating a heap 
  priority_queue <int, vector<int>, greater<int>> heap;
  /*
  most common actions 
    pq.size();
    pq.top(); // first element in the piority queue
    pq.pop();
    pq.push(val); // pushes in O(log n)

    */
  int arr[6] = { 10, 2, 4, 8, 6, 9 };
   
    // defining priority queue
    priority_queue<int> pq;
 
    // printing array
    cout << "Array: ";
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    // pushing array sequentially one by one
    for (int i = 0; i < 6; i++) {
        pq.push(arr[i]);
    }
 
    // printing priority queue
    cout << "Priority Queue: ";
    while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
}
