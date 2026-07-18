#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, cost[200010];
int k;
ll ans = 0;

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i ++) cin >> cost[i];
    sort(cost + 1, cost + n + 1);
    for(int i = 1; i <= n - k; i ++) {
        ans += cost[i] * 1LL;
    }
    cout << ans << endl;
}