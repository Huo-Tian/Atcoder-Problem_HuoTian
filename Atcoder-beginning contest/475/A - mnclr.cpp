#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    cin >> s;
    string t;
    t += s[0];
    for(int i = 1; i < s.size(); i ++) {
        t += 'o';
        t += s[i];
    }
    cout << t << endl;
}