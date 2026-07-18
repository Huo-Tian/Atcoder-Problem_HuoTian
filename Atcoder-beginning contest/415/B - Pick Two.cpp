#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    cin >> s;
    int sl = s.size(), t = 0, l = 0;
    for(int i = 0; i < sl; i ++) {
        if(s[i] == '#') {
            if(t == 1) {
                cout << l + 1 << "," << i + 1 << endl;
                t = 0, l = i + 1;
            } else {
                l = i;
                t ++;
            }
        }
    }
}