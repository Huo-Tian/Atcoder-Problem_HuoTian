#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
	cin >> s;
	for(int i = 0; i < s.size(); i ++) {
		if(s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += ' ';
		}
	}
	cout << "Of" << s << endl;
}