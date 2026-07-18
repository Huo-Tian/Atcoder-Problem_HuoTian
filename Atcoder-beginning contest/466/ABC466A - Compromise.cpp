#include <bits/stdc++.h>
using namespace std;

int n;
int x[100010];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        cin >> x[i];
    }
    bool flag = true;
    for (int i = 1; i <= n && flag; i ++) {
        if (x[i] >= 0) {
            flag = false;
        }
    }
    cout << (flag ? "Yes" : "No");
}