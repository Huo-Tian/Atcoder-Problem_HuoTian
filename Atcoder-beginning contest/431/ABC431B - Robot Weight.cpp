#include <bits/stdc++.h>
using namespace std;

int x, n, w[110], q, p;
bool used[110];

int main() {
	cin >> x;
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> w[i];
	}
	cin >> q;
	for(int i = 1; i <= q; i ++) {
		cin >> p;
		if(used[p]) {
			x -= w[p];
            used[p] = false;
		} else {
			x += w[p];
            used[p] = true;
		}
		cout << x << endl;
	}
}