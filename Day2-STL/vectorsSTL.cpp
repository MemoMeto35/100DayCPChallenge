// vectors are dynamic arrays with the ability to resize itself automatically when an element is inserted. 
// contiguous store locations, reallocation happens when underlying array full. 

// Methods: [], at(), back(), begin(), capacity(), clear(), empty(), end(), empty(), erase(), front(), insert(). 
// pop_back(), push_back(), reserve(), resize(), size()
#include<iostream>
#include<vector> 
using namespace std; 
int main(){
// Empty Container Constructor
vector<int> first; 

// Fill Constructor (4, integers with value 20)
vector<int> second(4, 20); 
// Range Constructor
int numbers[] = {10, 20, 30, 40};
vector<int> third(numbers, numbers+4);

// Copy Constructor
vector<int> fourth(third);

//Another way 
vector<int> fifth = {1, 2, 3, 4, 10}; 

// get the underlying capacity
second.capacity();
//get the max size(available due to system or library implementations)
second.max_size(); 

// erase the fourth element 
second.erase(arr.begin()+3)

vector<int> arr; 
arr.reserve(100); // if you push_back and the capacity is reached, it becomes a linear operation, so it is better to specify the capacity before running the code; 
// No doubling will happen untill you reach 101 elements
  
  // erase the range - first 3 elements
arr.erase(arr.begin(), arr.begin+3) // you should point to an element after that you want to delete



}
