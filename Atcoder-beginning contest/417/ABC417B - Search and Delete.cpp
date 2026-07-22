#include <bits/stdc++.h>
using namespace std;

int n, m, b[100010];
int a[100010];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int j = 1; j <= m; j ++) {
        cin >> b[j];
        for(int i = 1; i <= n; i ++) {
            if(a[i] == b[j]) {
                a[i] = -1;
                break;
            }
        }
    }
    for(int i = 1; i <= n; i ++) {
        if(a[i] == -1)
            continue;
        else
            cout << a[i] << " ";
    }
}