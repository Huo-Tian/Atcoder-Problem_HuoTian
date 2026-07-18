#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
	cin >> a >> b;
	double c = 1.0 * b * (2.0 / 3.0);
	if(a > c) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}