#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
	cin >> n >> m;
	if(m == (n % 2 == 0 ? n / 2 : n / 2 + 1)) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}