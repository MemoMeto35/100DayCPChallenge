#include<bits/stdc++.h>

using namespace std;

// O(log(b))
int powr(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1) res *= a; // counts for the number of bits for b;
		a *= a;
		b /= 2; 
	}
	return res;
}

int main()
{


	cout << powr(6, 5); // 6**5;


	return 0;
}
