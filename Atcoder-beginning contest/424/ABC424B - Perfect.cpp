#include <bits/stdc++.h>
using namespace std;

int n, m, k;
struct Players {
	int practice, time;
	bool done = false;
} a[110];

int b[1010], cnt = 0;

int main() {
	cin >> n >> m >> k;
    for(int i = 1; i <= n; i ++) {
        a[i].practice = m;
    }
	for(int i = 1; i <= k; i ++) {
		int x, y;
		cin >> x >> y;
		for(int i = 1; i <= n; i ++) {
			a[i].time = (a[i].done ? a[i].time : a[i].time + 1);
		}
		a[x].practice --;
		if(a[x].practice == 0) {
			a[x].done = true;
			b[++cnt] = x;
		}
	}
	for(int i = 1; i <= cnt; i ++) {
		cout << b[i] << " ";
	}
}