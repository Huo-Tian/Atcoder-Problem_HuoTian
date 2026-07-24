#include <bits/stdc++.h>
using namespace std;

int n, m, q;
string s, t;
bool s1[27], t1[27];

int main() {
    cin >> n >> m;
    cin >> s >> t;
    for(int i = 0; i < n; i ++) {
        s1[(int)(s[i] - 'a') + 1] = true;
    }
    for(int i = 0; i < m; i ++) {
        t1[(int)(t[i] - 'a') + 1] = true;
    }
    cin >> q;
    for(; q--; ) {
        string x;
        cin >> x;
        int l = x.size();
        bool unknown = false;
        for(int i = 0; i < l; i ++) {
            int tip = (int)(x[i] - 'a') + 1;
            if(s1[tip] == true && t1[tip] == true) {
                unknown = true;
            } else if(s1[tip] == true) {
                cout << "Takahashi\n";
                unknown = false;
                break;
            } else if(t1[tip] == true) {
                cout << "Aoki\n";
                unknown = false;
                break;
            }
        }
        if(unknown == true) {
            cout << "Unknown\n";
        }
    }
}