#include <bits/stdc++.h>
using namespace std;

int h, w;
char s[210][210];

int main() {
	cin >> h >> w;
	for(int i = 1; i <= h; i ++) {
		scanf("%s", s[i] + 1);
	}
	bool allblackflag = true;
	for(int i = 1; i <= h; i ++) {
		for(int j = 1; j <= w; j ++) {
			if(s[i][j] == '#') {
				int cnt = 0;
				if(s[i - 1][j] == '#') cnt ++;
				if(s[i + 1][j] == '#') cnt ++;
				if(s[i][j - 1] == '#') cnt ++;
				if(s[i][j + 1] == '#') cnt ++;
				if(cnt != 2 && cnt != 4) {
					allblackflag = false;
					break;
				}
			}
		}
	}
	cout << (allblackflag ? "Yes\n" : "No\n");
} 