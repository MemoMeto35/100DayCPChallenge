#include <iostream> 
using namespace std; 

int getIthBit(int n, int i){
  int mask = (1<<i); 
  return (n & mask) ? 1 : 0; // note that this is zero based indexing
}
void setIthBit(int &n, int i){ // you need to pass n by reference to change n without making a copy. 
  int mask = (1<<i);
  n = (n|mask); // | is binary or; 
}
void clearIthBit(int &n, int i){
  int mask = ~(1<<i); makes all the binary digits ones except the Ith bit;
  n = (n & mask); 
}

int main(){
  int n = 5; // 101
  getIthBit(n, 1); // 0
  setIthBit(n, 1); // 7 = 111
  clearIthBit(n, 0); // 6 = 110 
}
