#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
struct store {
    int a, b;
    string s;
} a[100100];

ll ans = 0;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i].a >> a[i].b >> a[i].s;
        if(a[i].s == "keep") {
            ans += max(0, a[i].b - a[i].a);
            continue;
        } else {
            continue;
        }
    }
    cout << ans << endl;
}