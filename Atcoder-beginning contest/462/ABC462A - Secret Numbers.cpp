#include <bits/stdc++.h>
using namespace std;

string s, ans;

int main() {
    cin >> s;
    int sl = s.size();
    ans = "";
    for(int i = 0; i < sl; i ++) {
        if(s[i] >= '0' && s[i] <= '9')
            ans += s[i];
    }
    cout << ans << endl;
}