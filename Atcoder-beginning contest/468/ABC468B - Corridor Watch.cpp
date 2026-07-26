#include <bits/stdc++.h>
using namespace std;

int d, m;
string s;
bool t[100010];

int main() {
    cin >> m >> d;
    cin >> s;
    int l = s.size() - 1;
    for(int i = 0; i <= l; i ++) {
        if(s[i] == 'G') {
            for(int j = max(0, i - d); j <= min(l, i + d); j ++) {
                t[j] = true;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i <= l; i ++) {
        ans += (t[i] == false ? 1 : 0);
    }
    cout << ans << endl;
}