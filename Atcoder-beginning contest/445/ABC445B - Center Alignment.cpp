#include <bits/stdc++.h>
using namespace std;

string s[110];
int n;

int main() {
	cin >> n;
	int m = 0;
	for(int i = 1; i <= n; i ++) {
		cin >> s[i];
		int x = s[i].size();
		m = max(m, x);
	}
	for(int i = 1; i <= n; i ++) {
		int x = s[i].size();
		int k = (m - x) / 2;
		for(int j = 1; j <= k; j ++) {
			cout << ".";
		}
		cout << s[i];
		for(int j = 1; j <= k; j ++) {
			cout << ".";
		}
		cout << endl;
	}	
}