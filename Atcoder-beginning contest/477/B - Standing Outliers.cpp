#include <bits/stdc++.h>
using namespace std;

int n, d, x[2026];
int sum = 0, ans[2026];

int main() {
    cin >> n >> d;
    for(int i = 1; i <= n; i ++)
        cin >> x[i];
    for(int i = 1; i <= n; i ++) {
        if(abs(x[i] - x[i - 1]) >= d && abs(x[i] - x[i + 1]) >= d) {
            ans[++sum] = i;
        }
    }
    cout << sum << endl;
    for(int i = 1; i <= sum; i ++)
        cout << ans[i] << " ";
}