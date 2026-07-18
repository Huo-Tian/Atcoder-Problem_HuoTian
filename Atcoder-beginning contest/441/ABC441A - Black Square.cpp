#include <bits/stdc++.h>

using namespace std;

int p, q, x, y;

int main() {
	cin >> p >> q >> x >> y;
	if(x <= p + 99 && x >= p && y <= q + 99 && y >= q) {
		cout << "Yes";
	} else {
		cout << "No";
	}
}