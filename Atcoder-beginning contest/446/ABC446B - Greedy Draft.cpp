#include <bits/stdc++.h>
using namespace std;

int n, m;
struct Node {
	int val;
	int x[110];
}l[110];
bool buy[100010];

int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i ++) {
		cin >> l[i].val;
		for(int j = 1; j <= l[i].val; j ++) {
			cin >> l[i].x[j];
		}
	}
	for(int i = 1; i <= n; i ++) {
		bool have = false;
		for(int j = 1; j <= l[i].val; j ++) {
			if(buy[l[i].x[j]] == false) {
				buy[l[i].x[j]] = true;
				have = true;
				cout << l[i].x[j] << endl;
				break;
			}
		}
		if(!have) {
			cout << 0 << endl;
		}
	}
}