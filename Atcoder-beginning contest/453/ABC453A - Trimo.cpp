#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
    cin >> n;
    cin >> s;
    bool dojust = false;
    for(int i = 0; i < n; i ++) {
        if(s[i] != '0' && !dojust) dojust = true;
        else if(s[i] == '0' && !dojust) continue;
        cout << s[i];
    }
}