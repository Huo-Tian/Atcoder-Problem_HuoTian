#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
	cin >> s;
	int ans = 0;
	int intel = s.size();
	for(int i = 0; i < intel; i ++) {
		if(s[i] == 'i' || s[i] == 'j') {
			ans++;
		}
	}
	cout << ans << endl;
}