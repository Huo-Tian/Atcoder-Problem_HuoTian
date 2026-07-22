#include <bits/stdc++.h>
using namespace std;

int n, l, r;
string s;
bool flag = true;

int main() {
    cin >> n >> l >> r;
    cin >> s;
    for(int i = l - 1; i < r; i ++) {
        if(s[i] == 'x') {
            flag = false;
        }
    }
    cout << (flag ? "Yes" : "No");
}