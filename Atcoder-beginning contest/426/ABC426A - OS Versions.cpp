#include <bits/stdc++.h>
using namespace std;

string x, y;

int main() {
	cin >> x >> y;
	if(y == "Ocelot") {
		cout << "Yes\n";
	} else if(y == "Serval") {
		if(x == "Serval" || x == "Lynx") {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	} else if(y == "Lynx") {
		if(x == "Lynx") {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}
}