#include <bits/stdc++.h>
using namespace std;

int n, a[100010];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 1; i <= n - 2; i ++) {
        if(a[i] < a[i + 1] && a[i + 1] > a[i + 2]) {
            ans ++;
        }
    }
    cout << ans << endl;
}