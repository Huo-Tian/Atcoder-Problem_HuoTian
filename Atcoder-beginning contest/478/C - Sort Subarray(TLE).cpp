#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;

int main() {
    cin >> n >> k;
    a.push_back(0);
    for(int i = 1; i <= n; i ++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> c = a, b;
    sort(c.begin(), c.end()); // n log n
    for(int i = 1; i <= n; i ++) { // n
        if(a[i] != c[i])
            b.push_back(i);
    }
    cout << (b[b.size() - 1] - b[0] <= k ? "Yes\n" : "No\n");
}