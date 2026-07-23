#include <bits/stdc++.h>
using namespace std;

int n, x, a[101010];
struct Times{
    int t, s;
}b[101010];

int main() {
    cin >> n >> x;
    for(int i = 0; i <= n; i ++) {
        cin >> a[i];
    }
    cout << 0 << " " << a[0] << endl;
    int rec = a[0];
    for(int i = 1; i <= n; i ++) {
        if(abs(a[i] - rec) >= x) {
            cout << i << " " << a[i] << endl;
            rec = a[i];
        }
    }
}