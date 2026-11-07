#include <bits/stdc++.h>
using namespace std;

int n, m;
struct men {
    string s;
    int have = 0;
} a[200010];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].s;
    }
    for (int i = 1; i <= m; i++) {
        string t;
        cin >> t;
        bool fflag = false;
        int cnt = 0, id = 0;
        for (int j = 1; j <= n; j++) {
            if (a[j].s == t) {
                a[j].have++;
                fflag = true;
                break;
            }
        }
        if (fflag) continue;
        for (int j = 1; j <= n; j++) {
            if (a[j].s.size() != t.size()) continue;
            int diff = 0;
            for (int k = 0; k < (int)t.size(); k++) {
                if (a[j].s[k] != t[k]) diff++;
                if (diff > 1) break;
            }
            if (diff == 1) {
                cnt++;
                id = j;
                if (cnt >= 2) break;
            }
        }
        if (cnt == 1) a[id].have++;
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i].have << "\n";
    }
    return 0;
}
