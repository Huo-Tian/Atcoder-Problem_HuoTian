#include <bits/stdc++.h>
using namespace std;

int n, m;
int f[100010];
bool flag[101010];

int main() {
    cin >> n >> m;
    bool f1 = true;
    for(int i = 1; i <= n; i ++) {
        cin >> f[i];
        if(flag[f[i]] == true) {
            cout << "No" << endl;
            f1 = false;
            break;
        } else {
            flag[f[i]] = true;
        }
    }
    if(f1) {
        cout << "Yes\n";
    }
    for(int i = 1; i <= m ;i ++) {
        if(flag[i] != true) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}