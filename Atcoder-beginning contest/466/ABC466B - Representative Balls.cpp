#include <bits/stdc++.h>
using namespace std;

int n, m;
int size1[100100];

int main() {
    cin >> n >> m;
    memset(size1, -1, sizeof(size1));
    for (int i = 1; i <= n; i ++) {
        int x, y;
        cin >> x >> y;
        size1[x] = max(size1[x], y);
    }
    for (int i = 1; i <= m; i ++) {
        cout << size1[i] << " ";
    }
}