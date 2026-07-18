#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[200010], b[200010];
int ma = INT_MIN;

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        cin >> b[i];
        int sum = ((m - a[i]) % b[i] >= 1 ? (m - a[i]) / b[i] + 1 : (m - a[i]) / b[i]);
        (sum > ma ? ma = sum : ma = ma);
    }
    cout << ma << endl;
}