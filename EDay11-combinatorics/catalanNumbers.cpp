// count the number of Binary Search Trees that can be formed using N nodes, numbered from 1 to N.
// this problems represents the Catalan numbers: 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786, 208012, 742900, 2674440, 9694845
// the general formula to the catalan numbers: nth catalan = 1/(n+1) * (2nCn)

#include<iostream>
#include<vector>
using namespace std;

int countBST(int n){ // this code runs in exponential time 2^n;
  if(n == 0 || n  == 1) return 1;
  int ans = 0;
  for(int i = 1; i<=n; i++){
    int x = countBST(i-1);
    int y = countBST(n-i);
    ans += x*y;
  }
  return ans;
}
int countBSTTopDown(int n, int dp[]){ // this runs in polynomial time because of memoization O(n^2)
  if(n == 0|| n == 1) return 1;
  if(dp[n]!=0) return dp[n];
  int ans = 0;
  for(int i = 1; i <=n; i++){
    int x = countBSTTopDown(i-1, dp);
    int y = countBSTTopDown(n-i, dp);
    ans += x*y;
  }
  return dp[n] = ans;
}
int countBSTBottomUp(int N){ // O(N^2)
  vector<int> dp(N+1, 0);
  dp[0] = dp[1] = 1;

  for(int n = 2; n<=N; n++){
    for(int i = 1; i<=n; i++){
      dp[n] += dp[i-1]*dp[n-i];
    }
  }
  return dp[N];
}

int main(){
  int n = 4;
  int dp[100] = {0}; // initialize dp with hundred zeros;
  cout << countBST(n) << endl;
  cout << countBSTTopDown(n, dp) << endl;
  cout << countBSTBottomUp(n) << endl;

  return 0;
}
