#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> a;

int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	cin >> x;
	if(a.find(a.begin(), a.end(), x)) {
		cout << "Yes" << endl;
	} else
		cout << "No" << endl;
}