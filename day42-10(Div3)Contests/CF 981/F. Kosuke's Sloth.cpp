/*
    Always Stay Organized ||
    Memoize Solutions to solve harder Ones;
*/
#include<bits/stdc++.h>
using namespace std;

#define int            long long int
#define ar             array
#define endl           "\n"
#define all(p)         p.begin(), p.end()
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

int n, k;
const int maxN = 2e5;
const int mod = 1e9+7;

void solve() {
    cin >> n >> k;
    int a = 1%k, b = 1%k, z = 1; // nice way if k is 1 then a, b, zre zeros
    while(a!=0){
        int c = (a+b)%k;
        a = b;
        b = c;
        ++z;
    }
    cout << (n%mod)*(z%mod)%mod << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
