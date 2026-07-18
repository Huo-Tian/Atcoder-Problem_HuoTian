#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
	cin >> n >> m;
	for(int i = 1; i <= m; i ++) {
		cout << "OK\n";
	}
	for(int i = 1; i <= m - n; i ++) {
		cout << "Too Many Requests\n";
	}
}