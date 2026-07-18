#include <bits/stdc++.h>
using namespace std;

int n, t;
int a[200100], b[200010];
int ans = 0;

int main() {
    cin >> n >> t;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i] >> b[i];
        ans += max(a[i] - b[i] * t, 0);
    }
    cout << ans << endl;
}