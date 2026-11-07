#include <bits/stdc++.h>
using namespace std;

string s, t;
int a[400100];
int q, l, r;

int main() {
    cin >> q;
    cin >> s >> t;
    for(int i = 0; i + t.size() <= s.size(); i ++) {
        a[i + 1] = a[i] + (s.substr(i, t.size()) == t);
    }
    for(int i = 1; i <= q; i ++) {
        cin >> l >> r;
        string p = s.substr(l - 1,  r - l + 1);
        if(r - l + 1 >= t.size() && a[r - t.size() + 1] > a[l - 1]) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}