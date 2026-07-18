#include <bits/stdc++.h>
using namespace std;

int d, n;

int main() {
	cin >> d >> n;
	int cnt = n;
	while(true) {
		cnt += 7;
		if(cnt > d) {
			cnt -= d;
			cout << cnt << endl;
			break;
		}
	}
}