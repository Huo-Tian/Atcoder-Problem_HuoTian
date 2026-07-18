#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k;
struct Shop {
    int a, b, c;
} a[200010];

bool cmp(Shop a, Shop b) {
    if(a.c == b.c)
        return a.b < b.b;
    return a.c > b.c;
}

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i].a >> a[i].b;
        a[i].c = a[i].a - a[i].b;
    }
    sort(a + 1, a + n + 1, cmp);
    ll ans = 0;
    for(int i = 1; i <= k; i ++) {
        ans += a[i].b;
    }
    for(int i = k + 1; i <= n; i ++) {
        ans += a[i].a;
    }
    cout << ans << endl;
}