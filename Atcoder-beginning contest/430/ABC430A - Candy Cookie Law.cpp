#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

int main() {
	cin >> a >> b >> c >> d;
	if(c >= a) {
		if(d >= b) {	
			cout << "No\n";
		} else {
			cout << "Yes\n";
		}
	} else {
		cout << "No\n";
	}
}