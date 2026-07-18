//ABC440-A

#include <bits/stdc++.h>

using namespace std;

int x, y;

int main() {
	cin >> x >> y;
	for(int i = 1; i <= y; i ++) {
		x *= 2;
	}
	cout << x << endl;
}