#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
	cin >> n;
	int ans = 0;
	for(int i = 1; i <= n; i ++) {
		int sum = -1, sumb = 0;
		sumb = i * i * i;
		for(int j = 1; j < i; j ++) {
			sum *= -1;
		}
		ans += sum * sumb;
	}
	cout << ans << endl;
}