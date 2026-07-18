#include <bits/stdc++.h>
using namespace std;

int n;
char x;
string s[100100];

int main() {
    cin >> n >> x;
    for(int i = 1; i <= n; i ++) {
        cin >> s[i];
        if(s[i][(int)(x - 65)] == 'o') {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
}