#include <bits/stdc++.h>
using namespace std;

int n, x;
string s[510], y;

int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> s[i];
	}
	cin >> x >> y;

	if(s[x] == y) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}