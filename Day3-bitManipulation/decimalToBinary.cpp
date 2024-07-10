#include<iostream>
using namespace std; 

int decimalToBinary(int n){
  int p = 1; 
  int last_bit; 
  int ans = 0; 
  while(n){
    last_bit = (n&1); 
    ans += last_bit*p;
    p *=10;
    n >>= 1; 
  }
  return ans; 
  
}
int main(){
  cout << decimalToBinary(5);
}
