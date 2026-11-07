#include <bits/stdc++.h>
using namespace std;

map<string, int> a;
int q;
int times;

int main() {
    cin >> q;
    times = 1;
    for(int i = 1; i <= q; i ++) {
        string s;
        cin >> s;
        auto [id, p] = a.try_emplace(s, times);
        if(p) times ++;
        cout << id->second << endl;
    }
}