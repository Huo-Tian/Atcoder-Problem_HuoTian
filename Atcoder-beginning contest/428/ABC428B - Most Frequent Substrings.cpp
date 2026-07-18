#include <bits/stdc++.h>
using namespace std;

int n, k, b[100010];
int tim1e = 0, cnt = 0;
string s, x;
string a[100010];

int main() {
    cin >> n >> k >> s;
    if(k > n) {
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; i <= n - k; i ++) {
        x = s.substr(i, k);
        for(int j = i; j <= n - k; j ++) {
            if(s.substr(j, k) == x && j < s.size()) {
                b[i]++;
            }
        }
        if(b[i] > tim1e && i <= s.size()) {
            tim1e = b[i];
            cnt = 0;
            a[++cnt] = x;
        } else if(b[i] == tim1e && i <= s.size()) {
            a[++cnt] = x;
        }
    }
    sort(a + 1, a + cnt + 1);
    cout << tim1e << endl;
    if(tim1e >= 1)
        for(int i = 1; i <= cnt; i ++) {
            cout << a[i] << " ";
        }
    else {
        return 0;
    }
}