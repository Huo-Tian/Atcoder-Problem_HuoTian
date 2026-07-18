#include <bits/stdc++.h>
using namespace std;

int u, d, l, r;
char s[1010][1010];

int main() {
	cin >> d >> r;
	u = l = 1;
	for(int i = u; i <= d; i ++) {
		for(int j = l; j <= r; j ++) {
			cin >> s[i][j];
		}
	}
	while(1) {
		bool up, down, left, right;
		up = down = left = right = true;
		for(int i = l; i <= r; i ++) {
			if(s[u][i] != '.') {
				up = false;
			}
			if(s[d][i] != '.') {
				down = false;
			}
		}
		for(int i = u; i <= d; i ++) {
			if(s[i][l] != '.') {
				left = false;
			}
			if(s[i][r] != '.') {
				right = false;
			}
		}
		if(left == false && right == false && up == false && down == false) {
			break;
		}
		if(up) {
			u++;
		}
		if(down) {
			d--;
		}
		if(left) {
			l++;
		}
		if(right) {
			r--;
		}
	}
	for(int i = u; i <= d; i ++) {
		for(int j = l; j <= r; j ++) {
			cout << s[i][j];
		}
		cout << endl;
	}
}