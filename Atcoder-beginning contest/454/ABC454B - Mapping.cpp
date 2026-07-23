#include <bits/stdc++.h>
using namespace std;

int n, m;
int f[100010];
int b[100010];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> f[i];
        b[f[i]] ++;
    }
    bool flag1 = true, flag2 = true;
    for(int i = 1; i <= m; i ++) {
        if(b[i] >= 2) {
            flag1 = false;
            break;
        }
    }
    for(int i = 1; i <= m; i ++) {
        if(b[i] == 0) {
            flag2 = false;
            break;
        }
    }
    cout << (flag1 ? "Yes\n" : "No\n") << (flag2 ? "Yes\n" : "No\n");
}