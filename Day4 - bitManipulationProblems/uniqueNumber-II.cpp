// This is similar to the priviuous problem but instead of one unique elements, there are two unique elements.
// 2N+2
#include<iostream>
#include<array>
using namespace std;

int main(){
  array<int, 10> arr = {2, 3, 6, 6, 3, 1, 5, 7, 7, 2};
  int ans = 0;
  int num1 = 0;
  int num2 = 0;
  for(auto x : arr){
    ans ^= x;
  }
  int p = 0;

  while(ans){

    int mask = 1 << p;
    if(ans & mask){
      ans = 0;
      break;
    }
    p++;
  }

  for(auto x : arr){
  int mask = 1 << p;
  if(x & mask){
    num1 = num1 ^ x;
  } else num2 = num2 ^x;

  }

  cout << num1 << " " << num2; // 5 1

}
