#include <bits/stdc++.h>
using namespace std;

int n, q;
char s[200010], s2[200010];
int opt;
int x;
char c;

int main() {
    cin >> n >> q;
    memset(s, 'a', sizeof(s));
    memset(s2, '.', sizeof(s2));
    for(; q--; ) {
        cin >> opt;
        if(opt == 1) {
            cin >> x;
            s2[x] = (s2[x] == '.' ? '#' : '.');
        } else {
            cin >> c;
            for(int i = 1; i <= n; i ++) {
                if(s2[i] == '.') {
                    s[i] = c;
                }
            }
        }
    }
    for(int i = 1; i <= n; i ++) {
        cout << s[i];
    }
}