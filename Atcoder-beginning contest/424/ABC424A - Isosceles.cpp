#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
	cin >> a >> b >> c;
	if((a == b && b == c && a == c))
		cout << "Yes\n";
	else if((a == b) || (b == c || a == c))
		cout << "Yes\n";
	else
		cout << "No\n";
}