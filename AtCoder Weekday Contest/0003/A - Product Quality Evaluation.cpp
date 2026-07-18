#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int a[200100], b[200100];
ll k;

int main() {
    cin >> n >> k;
    int ans = 0;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i] >> b[i];
        if((1LL * a[i] * b[i]) >= k) {
            ans ++;
        }
    }
    cout << ans << endl;
}