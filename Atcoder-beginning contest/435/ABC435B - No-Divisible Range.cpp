#include <bits/stdc++.h>
using namespace std;

int n, a[10010], ans;

int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	for(int l = 1; l <= n; l ++) {
		for(int r = l; r <= n; r ++) {
			int sum = 0;
			for(int i = l; i <= r; i ++) {
				sum += a[i];
			}
			bool canapproved = true;
			for(int i = l; i <= r; i ++) {
				if(a[i] % sum == 0) {
					canapproved = false;
					break;
				}
			}
			ans = (canapproved ? ans + 1 : ans);
 		}
	}
	cout << ans << endl;
}