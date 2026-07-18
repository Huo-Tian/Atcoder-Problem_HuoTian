#include <bits/stdc++.h>
using namespace std;

int x, c;

int main() {
	cin >> x >> c;
	for(int i = x; i; i -= 1000) {
		double sum = 1.0 * i * (c / 1000.0);
		//cout << sum + i << endl;
		if(sum + i <= x) {
			if(i % 1000 == 0) {
				cout << i << endl;
				return 0;
			} else {
				break;
			}
		}
	}
	cout << 0 << endl;
}