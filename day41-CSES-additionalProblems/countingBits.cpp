#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

map<ll,ll> dp;

ll f(ll a){
    if(a == 0)  return 0;
    if(dp[a])   return dp[a];
    if(a&1)     return dp[a] = 2*f(a/2)+(a/2)+1;
    else        return dp[a] = f(a/2)+f(a/2-1)+(a/2);
}

int main(){
    ll n;
    cin >> n;
    cout << f(n);
}
