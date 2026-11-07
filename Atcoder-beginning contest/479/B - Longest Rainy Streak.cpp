#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
    cin >> n;
    s.resize(n + 1);
    s[0] = ' ';
    cin >> s;
    int t = 0, ans = 0;
    for(int i = 1; i <= n; i ++) {
        if(s[i] == 'R')
            t ++;
        else
            ans = max(ans, t), t = 0;
    }
    cout << ans << endl;
}