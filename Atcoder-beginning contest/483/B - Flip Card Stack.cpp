#include <bits/stdc++.h>
#define fst first
#define snd second
using namespace std;

pair<int, bool> a[200010];
pair<int, bool> b[200010];
int n, q;
int k;

int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i ++) {
        a[i].fst = i;
        a[i].snd = true;
    }
    for (; q--; ) {
        cin >> k;
        for (int i = 1; i <= k; i ++) {
            b[i] = a[i];
        }
        reverse(b + 1, b + k + 1);
        for (int i = 1; i <= k; i ++) {
            b[i].snd = (b[i].snd ? false : true);
            a[i] = b[i];
        }
    }
    for (int i = 1; i <= n; i ++) {
        cout << (a[i].snd ? a[i].fst : -a[i].fst) << "\n";
    }
}