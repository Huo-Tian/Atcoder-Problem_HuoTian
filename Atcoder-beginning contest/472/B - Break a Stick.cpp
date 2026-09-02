#include <bits/stdc++.h>
using namespace std;

int n;
int l[200200];
int pre = 0, back = 0;
int ans = INT_MAX;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> l[i];
        back += l[i];
    }
    for(int i = 1; i <= n; i ++) {
        pre += l[i];
        back -= l[i];
        ans = min(ans, abs(pre - back));
    }
    cout << ans << endl;
}