#include<iostream>
using namespace std; 

int countBitsSlow(int n){
  int count = 0; 
  while(n){
    int lastBit = n&1; 
    n >>=1; 
    count+=lastBit; 
  }
  return count; 
}
int countBitsFast(int n){ // this method removes the last set bit from the binary representation; loops only the number of bits;
  int count = 0; 
  while(n){
    n = n&(n-1); 
    count++; 
  }
  return count; 
}
int main(){
  cout << countBitsSlow(5); // 2
  cout << countBitsFast(15); // 4
}
