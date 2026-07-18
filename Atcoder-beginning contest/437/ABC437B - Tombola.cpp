#include <bits/stdc++.h>
using namespace std;

int h, w, a[4][6], n, b[100];

int main() {
	cin >> h >> w;
	
	cin >> n;
	for(int i = 1; i <= h; i ++) {
		for(int j = 1; j <= w; j ++) {
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i ++) {
		cin >> b[i];
	}
	int ans = 0;
	for(int i = 1; i <= h; i ++) {
		int sum = 0;
		for(int j = 1; j <= w; j ++) {
			for(int k = 1; k <= n; k ++) {
				if(a[i][j] == b[k]) {
					sum ++;
				}
			}
		}
		ans = max(ans, sum);
	}
	cout << ans << endl;
}