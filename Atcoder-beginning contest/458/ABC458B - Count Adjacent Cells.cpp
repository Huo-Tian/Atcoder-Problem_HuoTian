#include <bits/stdc++.h>
using namespace std;

int h, w;

bool valid(int x, int y) {
    if(x >= 1 && x <= h && y >= 1 && y <= w)
        return true;
    return false;
}

int main() {
	cin >> h >> w;
    for(int i = 1; i <= h; i ++) {
        for(int j = 1; j <= w; j ++) {
            int t = 0;
            if(valid(i - 1, j) == true)
                t ++;
            if(valid(i + 1, j) == true)
                t ++;
            if(valid(i, j - 1) == true)
                t ++;
            if(valid(i, j + 1) == true)
                t ++;
            cout << t << " ";
        }
        cout << endl;
    }
}