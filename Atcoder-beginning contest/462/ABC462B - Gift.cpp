#include <bits/stdc++.h>
using namespace std;

int n;
int a[1010][1010], cnt[1010];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        int k;
        cin >> k;
        for(int j = 1; j <= k; j ++) {
            int x;
            cin >> x;
            a[x][++cnt[x]] = i;
        }
    }
    for(int i = 1; i <= n; i ++) {
        if(cnt[i] == 0)  {
            cout << 0 << endl;
            continue;
        }
        cout << cnt[i] << " ";
        for(int j = 1; j <= cnt[i]; j ++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}