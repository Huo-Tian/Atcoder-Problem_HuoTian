#include <bits/stdc++.h>
using namespace std;

string s;

int a[27];

int main() {
	cin >> s;
	for(int i = 0; i < s.size(); i ++) {
		a[s[i] - '0']++;
	}
	int x = INT_MIN;
	for(int i = 1; i <= 26; i ++) {
		x = max(x, a[i]);
	}
	int count = 0, side[10010];
	for(int i = 1; i <= 26; i ++) {
		if(a[i] == x) {
			side[++count] = i;
		}
	}
	for(int i = 0; i < s.size(); i ++) {
		bool flag = false;
		for(int j = 1; j <= count; j ++) {
			if(s[i] - '0' == j) {
				flag = true;
				continue;
			}
		}
		if(!flag) {
			cout << s[i];
		}
	}
}