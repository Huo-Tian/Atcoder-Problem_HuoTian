#include <bits/stdc++.h>
using namespace std;

int n, x;
int a[100010];

int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	cin >> x;
	for(int i = 1; i <= n; i ++) {
		if(a[i] == x) {
			cout << "Yes\n";
			return 0;
		}
	}
	cout << "No\n" << endl;
}