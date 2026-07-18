#include <bits/stdc++.h>
using namespace std;

int n, l, r;
int ans = 0;
struct Node {
    int x, y;
} a[100010];

int main() {
    cin >> n >> l >> r;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i].x >> a[i].y;
        if(a[i].x <= l && a[i].y >= r) {
            ans ++;
        }
    }
    cout << ans << endl;
}