#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
    cin >> n;
    cin >> s;
    for(int i = 1; i <= n - s.size(); i ++) {
        cout << "o";
    }
    cout << s << endl;
}