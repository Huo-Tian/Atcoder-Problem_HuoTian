#include <bits/stdc++.h>
using namespace std;

string s;
int n;
int ans = 0;

int main() {
    cin >> n;
    cin >> s;
    for(int i = 0; i < n; i ++) {
        if((i == 0 || s[i - 1] == 'x') && (i == n - 1 || s[i + 1] == 'x')) {
            ans ++;
        }
    }
    cout << ans << endl;
}