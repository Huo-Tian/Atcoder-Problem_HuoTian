#include <bits/stdc++.h>
using namespace std;

string s;
int e, w, sl;

int main() {
	cin >> s;
	e = w = 0, sl = s.size();
	for(int i = 0; i < sl; i ++) {
		e = (s[i] == 'E' ? e + 1 : e);
		w = (s[i] == 'W' ? w + 1 : w);
	}
	cout << (e > w ? "East" : "West");
}