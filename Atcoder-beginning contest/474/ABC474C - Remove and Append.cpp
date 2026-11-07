#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int n, q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i ++) {
        int x;
        cin >> x;
        a[x] = i;
    }
    for(int i = 1; i <= q; i ++) {
        int x;
        cin >> x;
        a[x] = n + i;
    }
    vector<int> id(n);
    iota(id.begin(), id.end(), 1);
    sort(id.begin(), id.end(), [&](int x, int y) {
        return a[x] < a[y];
    });
    for(auto i : id)
        cout << i << " ";
    return 0;
}