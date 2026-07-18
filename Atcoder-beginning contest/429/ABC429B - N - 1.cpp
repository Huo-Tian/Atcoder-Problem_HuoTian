#include <bits/stdc++.h>
using namespace std;

int n, m, a[100010];

int main() {
	cin >> n >> m;
	int x = 0;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
		x += a[i];
	}
	for(int i = 1; i <= n; i ++) {
		if(x - a[i] == m) {
			cout << "Yes\n";
			return 0;
		}
	}
	cout << "No\n";
}