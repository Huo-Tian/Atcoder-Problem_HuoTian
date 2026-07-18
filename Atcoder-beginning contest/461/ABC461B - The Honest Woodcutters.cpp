#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];
int b[100010];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    bool flag = true;
    for(int i = 1; i <= n && flag; i ++) {
        if(b[a[i]] == i) {
            flag = true;
        } else {
            flag = false;
        }
    }
    cout << (flag ? "Yes" : "No");
}