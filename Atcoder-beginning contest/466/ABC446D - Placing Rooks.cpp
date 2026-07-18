#include <bits/stdc++.h>
using namespace std;

int n, m, r[300010], c[30010];

char s[50010][50010];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i ++) {
        cin >> r[i] >> c[i];
        for (int j = 1; j <= n; j ++) {
            s[r[i]][j] = ' ';
        }
        for (int j = 1; j <= n; j ++) {
            s[j][c[i]] = ' ';
        }
        s[r[i]][c[i]] = '.';
    }
    int x = 0;
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= n; j ++) {
            if (s[i][j] == '.') x ++;
        }
    }
    cout << x << endl;
}