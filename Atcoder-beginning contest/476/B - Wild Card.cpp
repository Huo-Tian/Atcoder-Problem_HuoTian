#include <bits/stdc++.h>
using namespace std;

int n;
string s;
string t;

int main() {
    cin >> n;
    cin >> s;
    cin >> t;
    for(int i = 0; i < n; i ++) {
        if(t[i] != '*' && t[i] != s[i]) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}