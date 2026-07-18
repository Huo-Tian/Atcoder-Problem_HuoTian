#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
	cin >> s;
	int x = s.size();
	int m = (x + 1) / 2;
	for(int i = 0; i < m; i ++) {
		cout << s[i];
	}
	for(int i = m + 1; i < x; i ++) {
		cout << s[i];
	}
}