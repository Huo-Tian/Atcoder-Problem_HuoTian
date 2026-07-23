#include <bits/stdc++.h>
using namespace std;

string s;
int n;

int main() {
	cin >> s >> n;
	s = s.substr(n, s.size() - 2 * n);
	cout << s << endl;
}