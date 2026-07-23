#include <bits/stdc++.h>
using namespace std;

int n, a[200010][120], x, y;

int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i][0];
		for(int j = 1; j <= a[i][0]; j ++) {
			cin >> a[i][j];
		}
	}
	cin >> x >> y;
	cout << a[x][y] << endl;
}