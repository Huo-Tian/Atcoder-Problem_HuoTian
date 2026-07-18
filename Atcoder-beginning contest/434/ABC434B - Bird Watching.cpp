#include <bits/stdc++.h>
using namespace std;

int n, m, a[110], b[110];

int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i] >> b[i];
	}
	for(int i = 1; i <= m; i ++) {
		int sum = 0, t = 0;
		for(int j = 1; j <= n; j ++) {
			if(a[j] == i) {
				sum += b[j];
				t ++;
			}
		}
		double x = sum * 1.0;
		x /= t * 1.0;
		printf("%.20lf", x);
	}
}