#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
	cin >> s;
	if(s[0] == s[s.size() - 1]) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
}