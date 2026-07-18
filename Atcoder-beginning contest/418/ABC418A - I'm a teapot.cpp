#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
	cin >> n;
	cin >> s;
	if(s[s.size() - 3] == 't' && s[s.size() - 2] == 'e' && s[s.size() - 1] == 'e') {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}