//ABC439-A

#include <bits/stdc++.h>
using namespace std;

int n;

int cimi(int x) {
	int ans = 1;
	for(int i = 1; i <= x; i ++) {
		ans *= 2;
	}
	return ans;
}

int main() {
	cin >> n;
	cout << cimi(n) - n * 2 << endl;
}