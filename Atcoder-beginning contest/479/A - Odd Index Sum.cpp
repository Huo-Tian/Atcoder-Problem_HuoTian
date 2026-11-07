#include <bits/stdc++.h>
using namespace std;

int n;
int a[200010];

int main() {
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        if(i % 2)
            ans += a[i];
    }
    cout << ans << endl;
}