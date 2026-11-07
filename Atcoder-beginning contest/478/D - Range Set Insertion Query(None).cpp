#include <bits/stdc++.h>
using namespace std;

int n, q;
int l, r, e;
int a[200010];
int ans[200010];

int main() {
    cin >> n >> q;
    for(int i = 1; i <= q; i ++) {
        cin >> l >> r >> e;
        a[l] ++;
        a[r] --;
    }
    for(int i = 1; i <= n; i ++) {
        cout << a[i] << " ";
        ans[i] = ans[i - 1] + a[i];
    }
    for(int i = 1; i <= n; i ++) {
        cout << ans[i] << " ";
    }
}