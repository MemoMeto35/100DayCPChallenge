#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int P = 7, N = 1e5;
int fact[N];
int addm(int x, int y){
  return (x+y)%P;
}
int subm(int x, int y){
  return ((x-y)%P+P)%P;
}
int mulm(int x, int y){
  return ((x%P)*(y%P))%P;
}

int powrm(int x, int y){
  int res = 1;
  while(y){
    if(y&1) res = mulm(res, x);
    y >>= 1;
    x = mulm(x,x);
  }
  return res;
}
int inv(int x){
  return powrm(x, P-2); // this is derived from Fermat's Litte Theorem: x^P = x(mod P)
}
int divm(int x, int y){
  return mulm(x, inv(y));}

void calculate_factorials(){
  fact[0] = 1;
  for(int i =1; i<N; i++){
  fact[i] = mulm(fact[i-1], i); }}

int ncr(int n, int r){
  return mulm(mulm(fact[n], inv(fact[r])), inv(fact[n-r])); }
int npr(int n, int r){
  return mulm(fact[n], inv(fact[n-r])); }

int32_t main(){
  cout << addm(3, 5) << '\n';
  cout << subm(3, 5) << '\n';
  cout << mulm(324, 234) << '\n';
  cout << divm(56, 2) << '\n';
  calculate_factorials();
  cout << fact[5] << endl;
  cout << ncr(20, 6) << endl;
  cout << npr(20, 6) << endl;

  return 0;
}

