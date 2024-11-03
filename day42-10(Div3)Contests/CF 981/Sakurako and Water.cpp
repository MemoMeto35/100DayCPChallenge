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

int n, m;
const int maxN = 1000;
int a[maxN][maxN];

void solve() {
    cin >> n;
    vector<int> diagonal(2*n, 0);
    for(int i =0; i<n; ++i)
        for(int j =0; j<n; ++j)
            cin >> a[i][j];
    for(int i =0; i<n; ++i)
        for(int j =0; j<n; ++j)
            diagonal[i-j+n-1] = max(diagonal[i-j+n-1], -a[i][j]); // A nice trick to get all elements on the diagonal;
    cout << accumulate(all(diagonal), 0) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
