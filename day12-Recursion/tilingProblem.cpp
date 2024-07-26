// given a "4*n" board and tiles of size "4*1", count the number of ways to tile the given board using the 4*1 tiles;
// tiles can either be placed horzontally "1*4" or vertically "4*1"
#include<iostream>
#include<vector>
using namespace std;

long long int tiling(int n){
    vector<long long int> dp(100, 0);
    dp[0] = dp[1] = dp[2] = dp[3] =1;

    for(int i = 4; i <=n; i++){
        dp[i]= dp[i-1] + dp[i-4];
    }
    return dp[n];

}

int main(){
    int n;
    cin >> n;

    cout << tiling(n);
}
