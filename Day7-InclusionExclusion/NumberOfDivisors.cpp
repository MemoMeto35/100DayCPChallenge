// this algorithm for finding the total number of numbers that are divisible by the first 10 primes and these numbers are less than n; 

#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int32_t main() {



	int n;
	cin >> n;

	vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
	int m = primes.size();

	int ans = 0;

	for (int i = 1; i < (1 << m); i++) {

		int lcm = 1;
		for (int j = 0; j < m; j++) {
			// if jth bit of ith element is set then include it
			if ((i >> j) & 1) {
				lcm *= primes[j]; // generated all possible compinations of these primes multiplications. 

        
			}
		}

		if (__builtin_popcount(i) % 2 == 0) { // counts the number of set bits; 
			ans -= (n / lcm);
		}
		else {
			ans += (n / lcm); // utilizes the inclusion exclusion principle where even number of bits are subtracted and odd number of bits are added; 
		}
	}


	cout << ans;

	return 0;
}
