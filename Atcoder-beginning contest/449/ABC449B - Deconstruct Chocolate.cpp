#include <bits/stdc++.h>
using namespace std;

int h, w;
int q;

int main() {
    cin >> h >> w;
    cin >> q;
    for(; q --; ) {
        int opt;
        cin >> opt;
        if(opt == 1) {
            int r;
            cin >> r;
            cout << r * w << endl;
            h -= r;
        } else {
            int c;
            cin >> c;
            cout << h * c << endl;
            w -= c;
        }
    }
}