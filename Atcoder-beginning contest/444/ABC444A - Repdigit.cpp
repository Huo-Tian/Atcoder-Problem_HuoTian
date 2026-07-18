#include <bits/stdc++.h>
using namespace std;

string n;

int main() {
	cin >> n;
	if(n[0] == n[1] && n[1] == n[2]) {
		cout << "Yes";
	} else {
		cout << "No";
	}
}