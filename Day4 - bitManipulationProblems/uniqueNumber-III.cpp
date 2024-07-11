// in this problem you have an array where each number is repeated 3 times except for one element find that element;
#include<iostream>
#include<vector>
using namespace std;

void updateArray(vector<int> &sumBits, int x){
  int  i = 0;
  while(x){
  int bits = x & 1;
  x >>=1;
  sumBits[i] += bits;
  i++;}
}
int binaryToDecimal(vector<int> sumBits){

  int ans = 0;
  for(int i = 0; i < 32; i++){
    ans += (sumBits[i] <<i);
  }
  return ans;
}

int findUnique(vector<int> arr){
  vector<int> sumBits(32, 0);
  for(auto x : arr){
    updateArray(sumBits, x);
  }
  
  for(int i = 0; i < 32; i++){
      sumBits[i] %= 3; 
  }
  return binaryToDecimal(sumBits);

}

int main(){
  vector<int> arr = {1,3,5,4,3,1,5,5,3,1};
  cout << findUnique(arr);
}
