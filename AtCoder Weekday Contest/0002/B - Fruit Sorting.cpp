#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, k;
int a[200010], b[200010];
ll ans = 0, ans2 = 0;

int main() {
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int i = 1; i <= m; i ++) {
        cin >> b[i];
        if(a[b[i]] < k) {
            ans ++;
            ans2 += a[b[i]] * 1LL;
        }
    }
    cout << ans << " " << ans2 << endl;
}   