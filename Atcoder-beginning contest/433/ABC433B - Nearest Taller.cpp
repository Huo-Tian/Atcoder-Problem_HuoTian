#include <bits/stdc++.h>
using namespace std;

int n, a[100010];
bool findit = false;

int checkit(int x) {
	for(int i = x; i; i --) {
		if(a[i] > a[x]) {
			findit = true;
			return i;
		}
	}
	return 0;
}

int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	for(int i = 1; i <= n; i ++) {
		findit = false;
		if(i == 1) {
			cout << -1 << endl;
			continue;
		}
		int x = checkit(i);
		if(!findit)
			cout << -1 << endl;
		else {
			cout << x << endl;
		}
	}
}