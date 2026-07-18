#include <bits/stdc++.h>
using namespace std;

int a[4], n = 3;

int main() {
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for(int i = 1; i <= n; i ++) {
		cout << a[i];
	}
}