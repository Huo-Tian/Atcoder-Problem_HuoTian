#include <bits/stdc++.h>
using namespace std;

int h, w;

int main() {
	cin >> h >> w;
    if(h == 1 && w == 1) cout << 0 << endl;
    else if(h == 1) {
    	for(int i = 1; i <= w; i ++) {
			if(i == 1 || i == h) cout << 1 << "\n";
			else cout << "2\n";
		}
    } else if(w == 1) {
		for(int i = 1; i <= h; i ++) {
			if(i == 1 || i == h) cout << 1 << " ";
			else cout << "2 ";
		}
    } else 
		for(int i = 1; i <= h; i ++) {
			for(int j = 1; j <= w; j ++) {
				if((i == 1 && j == 1) || (i == 1 && j == w) || (i == h && j == 1) || (i == h && j == w)) {
					cout << 2 << " ";
				} else if((i == 1) || (j == 1) || (i == h) || (j == w)) {
					cout << 3 << " ";
				} else {
					cout << 4 << " ";
				}
			}
			cout << endl;
		}
}