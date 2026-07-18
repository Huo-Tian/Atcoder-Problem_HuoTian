#include <bits/stdc++.h>
using namespace std;

int x, y, l, r, a, b;

int main() {
	cin >> x >> y;
	cin >> l >> r;
	cin >> a >> b;
	int ans = 0;
	for(int i = a + 1; i <= b; i ++) {
		if(i > l && i <= r) {
			ans += x;
		} else {
			ans += y;
		}
	}
	cout << ans << endl;
}