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
    int cnt = a[0], sym = 0;
    b[++sym].t = 0;
    b[sym].s = a[0]; 
    for(int i = 1; i <= n; i ++) {
        if(abs(a[i] - cnt) >= x) {
            cnt = a[i];
            b[++sym].t = i;
            b[sym].s = a[i]; 
        }
    }
    for(int i = 1; i <= sym; i ++) {
        cout << b[i].t << " " << b[i].s << endl;
    }
}