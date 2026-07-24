#include <bits/stdc++.h>
using namespace std;

int x, c;

int main() {
	cin >> x >> c;
	for(int i = 1; i <= x / 1000; i ++) {
        if(i * (1000 + c) > x) {
            cout << (i - 1) * 1000 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}