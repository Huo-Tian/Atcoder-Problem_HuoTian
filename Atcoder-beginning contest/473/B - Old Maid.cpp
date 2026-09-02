#include <bits/stdc++.h>
using namespace std;

int n;
int a[200010], ans = 0;
bool b[200010];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i ++) {
        for(int j = i + 1; j <= n; j ++) {
            if(b[i] != true && b[j] != true && a[i] == a[j]) {
                // 1. b数组记一下“每个点有没有被删除掉，删除掉了即为true”
                // 2. 用一个cnt 去枚举-1, -2, ..., -?
                b[i] = b[j] = true;
            }
        }
    }
    for(int i = 1; i <= n; i ++) {
        if(!b[i])
            ans += a[i];
    }
    cout << ans << endl;
}