#include <bits/stdc++.h>
using namespace std;

int n, a, b;
string s;

int main() {
	cin >> n >> a >> b;
	cin >> s;
	for(int i = a; i <= n - 1 - b; i ++) {
		cout << s[i];
	}
	cout << endl;
}