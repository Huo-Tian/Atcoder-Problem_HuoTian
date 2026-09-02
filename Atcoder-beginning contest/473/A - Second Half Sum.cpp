#include <bits/stdc++.h>
using namespace std;

int n, a[200010];
int ans = 0;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        if(i >= n / 2 + 1)
            ans += a[i];
    }
    cout << ans << endl;
}