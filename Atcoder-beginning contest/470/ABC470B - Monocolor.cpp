#include <bits/stdc++.h>
using namespace std;

int n;
int a[200010];
int c[20010];

int main() {
    cin >> n;
    int ma = 0;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        c[a[i]] ++;
        ma = max(ma, c[a[i]]);
    }
    cout << n - ma << endl;
}