#include <bits/stdc++.h>
using namespace std;

int w, b;

int main() {
	cin >> w >> b;
	for(int i = 1; i; i ++) {
		int x = w * 1000;
		if(x < i * b) {
			cout << i << endl;
			return 0;
		}
	}
}