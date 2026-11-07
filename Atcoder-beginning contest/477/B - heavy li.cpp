#include <bits/stdc++.h>
using namespace std;

int n, d, x[2026];
int sum = 0, ans[2026];

int main() {
    cin >> n >> d;
    for(int i = 1; i <= n; i ++)
        cin >> x[i];
    for(int i = 1; i <= n; i ++) {
        bool flag = true;
        for(int j = 1; j <= n; j ++) {
            if(i != j && abs(x[i] - x[j]) < d) {
                flag = false;
                break;
            }
        }
        if(flag) {
            ans[++sum] = i;
        }
    }
    cout << sum << endl;
    for(int i = 1; i <= sum; i ++)
        cout << ans[i] << " ";
}