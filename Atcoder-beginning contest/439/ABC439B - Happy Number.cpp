#include <bits/stdc++.h>
using namespace std;

string n, ans;

int main() {
	cin >> n;
	ans = n;
	int cnt = 0;
	while(true) {
		n.clear();
		cnt++;
		int sum = 0;
		for(int i = 0; i < ans.size(); i ++) {
			sum += (ans[i] - '0') * (ans[i] - '0');
		}
		n += (sum / 1000 % 10 + '0');
		n += (sum / 100 % 10 + '0');
		n += (sum / 10 % 10 + '0');
		n += (sum % 10 + '0');
		ans = n;
		if(ans.size() == 1 && ans[ans.size() - 1] == '1') {
			cout << "Yes\n";
			break;
		}
		if(cnt >= 500) {
			cout << "No\n";
			break;
		}
	}
}