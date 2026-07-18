#include <bits/stdc++.h>
using namespace std;

int X, Y, Z;

int main() {
	cin >> X >> Y >> Z;
	if((X - Y * Z) % (Z - 1) == 0 && X - Y * Z >= 0) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}