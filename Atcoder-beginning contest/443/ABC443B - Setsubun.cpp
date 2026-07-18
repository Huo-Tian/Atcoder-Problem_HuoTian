#include <bits/stdc++.h>
using namespace std;

int n, k;

int main() {
	cin >> n >> k;
	int cnt = 0, tm = 0;
	for(; cnt < k; ) {
		cnt += n;
		n ++;
		tm++;
	}
	cout << tm << endl;
}