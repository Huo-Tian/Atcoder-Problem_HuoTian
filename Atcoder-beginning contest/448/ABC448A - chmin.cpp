#include <bits/stdc++.h>
using namespace std;

int n, x;
int a[100010];

int main() {
    cin >> n >> x;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i ++) {
        if (a[i] < x) {
            x = a[i];
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
}