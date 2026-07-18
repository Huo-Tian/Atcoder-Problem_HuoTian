//abc440-b

#include <bits/stdc++.h>
using namespace std;

const int N = 110;

struct Horse {
	int speed, id;
}a[N];

int n;

bool cmp(const Horse &a, const Horse &b) {
	return a.speed < b.speed;
}

int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i].speed;
		a[i].id = i;
	}
	sort(a + 1, a + n + 1, cmp);
	for(int i = 1; i <= 3; i ++) {
		cout << a[i].id << " ";
	}
	cout << endl;
}