// provided that you have in egyptian currency bills that are [200,100,50,20,10,5,1]
// provide the least number of bills that can make up a number num
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin >> n;
  int res = 0;
  vector<int> bills{200,100,50,20,10,5,1};
  for(auto it:bills){
    while(n>=it){
      n-=it;
      res++;
    }
  }
  cout << res;
}
