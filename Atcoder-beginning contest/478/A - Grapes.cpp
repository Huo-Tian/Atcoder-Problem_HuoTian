#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[20010];

int main() {
    cin >> n >> m;
    for(int i = 1; m; i = (i + 1 > n ? 1 : i + 1)) {
        a[i] ++;
        m --;
    }
    for(int i = 1; i <= n; i ++) {
        cout << a[i] << endl;
    }
}