#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100010];
int ans = 0;

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        ans += a[i];
    }
    cout << (ans <= m ? "Yes" : "No");
}