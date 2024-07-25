#include<bits/stdc++.h>
#define int long long int
using namespace std;


int powrm(int x, int y){ // O(log y)
  int res = 1;
  while(y){
    if(y&1) res = res*x;
    y >>= 1;
    x *= x;
  }
  return res;
}
int inv(int x, int P){ // O log(P-2)
  return powrm(x, P-2); // this is derived from Fermat's Litte Theorem: x^P = x(mod P)
}
int crt(int num[], int rem[], int k){
  int productOfnums = 1;
  for(int i =0; i<k; i++){
    productOfnums *= num[i];
  }
  int res = 0;
  for(int i = 0; i < k; i++){
    int productOfOtherNums = productOfnums / num[i];
    res += productOfOtherNums*inv(productOfOtherNums, num[i])* rem[i];
  }
  return res%productOfnums;
}
int32_t main(){
  int num[] = {5, 7, 11};
  int rem[] = {2, 3, 10};
  int k = sizeof(num)/sizeof(int);
  cout << "x = " << crt(num, rem, k)<< endl;
  cout << 3552%(5*7*11);


  return 0;
}

