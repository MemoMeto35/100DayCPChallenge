/*
    Always pray and trust Allah:) ||
    keep up the good work, and never look back! ||
    Do something instead of NOTHING ||
    Always Stay Oranized||
    Memoize Solutions to solve harder Ones;
*/

#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace __gnu_pbds;

using namespace std;

typedef long long ll;


void solve() {
    
    int N;
    ll x;
    ll sum;
    ll cnt = 0;
    int t[40];
    unordered_map<ll, int> freq;

    scanf("%d %lld", &N, &x);
    for(int i = 0; i < N; i++)
        scanf("%d", &t[i]);
    sort(t, t+N);

    if(N == 1){
        printf("%d\n", x == t[0]);
        return;
    }

    freq.reserve(1<<(N/2-1));
    for(int i = 0; i < (1<<(N/2-1)); i++){
        sum = 0;
        for(int j = 0; j < N/2-1; j++)
            if(i&(1<<j))
                sum += t[j];
        freq[sum]++;
    }

    for(int i = 0; i < (1<<((N+1)/2+1)); i++){
        sum = 0;
        for(int j = 0; j < (N+1)/2+1; j++)
            if(i&(1<<j))
                sum += t[N/2-1+j];
        if(freq.find(x-sum) != freq.end())
            cnt += freq[x-sum];
    }

    printf("%lld\n", cnt);

}

int32_t main()
{

    solve();

    return 0;
}
