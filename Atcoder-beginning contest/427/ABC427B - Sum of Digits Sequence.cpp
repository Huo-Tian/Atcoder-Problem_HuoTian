#include <bits/stdc++.h>
using namespace std;

int n;
int a[110];

int f(int x) {
	int res = 0;
    while(x > 0) {
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main() {
	cin >> n;
	a[0] = 1;
	for(int i = 1; i <= n; i ++) {
		for(int j = 0; j < i; j ++) {
			a[i] += f(a[j]);
		}
	}
	cout << a[n] << endl;
}