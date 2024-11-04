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
const int maxN = 1e6+5;
int a[maxN];

void solve() {
    cin >> n;
    for(int i =0; i<n; ++i)
        cin >> a[i], --a[i];
    vector<int> done(n, 0);
    int ans =0;
  // the idea is to compute the length of the cycle of it even(we can do one swich beteween them to reduce the cyle legth by 2) if odd we need to make the element map to itself;
    for(int i = 0; i<n; ++i){
        if(!done[i]){
            int length = 0, x = i;
            do{
                x = a[x];
                length++;
                done[x] = 1;
            } while(x^i);
            ans += (length+1)/2-1;
        }
    }
    cout << ans << endl;


}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
