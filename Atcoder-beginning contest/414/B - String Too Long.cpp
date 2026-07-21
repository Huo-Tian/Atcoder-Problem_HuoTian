#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
struct Node {
    char c;
    ll l;
} a[110];

int main() {
    cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i].c >> a[i].l;
        sum += a[i].l;
        if(sum > 100) {
            cout << "Too Long\n";
            return 0;
        }
    }
    for(int i = 1; i <= n; i ++) {
        for(ll j = 1; j <= a[i].l; j ++) {
            cout << a[i].c;
        }
    }
}