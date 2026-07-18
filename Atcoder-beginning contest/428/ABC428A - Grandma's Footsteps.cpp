#include <bits/stdc++.h>
using namespace std;

int s, a, b, x;

int main() {
    cin >> s >> a >> b >> x;
    int ans = 0;
    while(x >= 0) {
        if(x - a < 0) {
            ans += x * s;
            break;
        } else {
            ans += a * s;
            x -= a + b;
        }
    }
    cout << ans << endl;
}