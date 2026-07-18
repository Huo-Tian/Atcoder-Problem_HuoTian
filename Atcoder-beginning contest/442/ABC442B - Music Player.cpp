#include <bits/stdc++.h>
using namespace std;

int n, a[200010];

int main() {
	cin >> n;
	bool outing = false;
	int sound = 0;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
		if(a[i] == 1) {
			sound++;
		} else if(a[i] == 2) {
			if(sound >= 1) {
				sound--;
			}
		} else if(a[i] == 3) {
			outing = (outing ? false : true);
		}
		if(outing == true && sound >= 3) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}
}