#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100100];

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    int where = 0;
    bool find = false;
    for(int i = 1; i <= n && !find; i ++) {
        if(a[i] == k) find = true, where = i;
    }
    if(find) cout << where << endl;
    else cout << -1 << endl;
}