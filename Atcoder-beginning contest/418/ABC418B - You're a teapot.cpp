#include <bits/stdc++.h>
using namespace std;

string s;
int n;
double ans = 0;

int main() {
    cin >> s;
    n = s.size();
    for(int l = 0; l < n; l ++) {
        for(int r = l; r < n; r ++) {
            if(s[l] == 't' && s[r] == 't' && r - l + 1 >= 3) {
                int t = 0;
                for(int i = l; i <= r; i ++) {
                    t += (s[i] == 't' ? 1 : 0);
                }
                ans = max(ans, (((t * 1.0 - 2.0)) / ((r * 1.0 - l * 1.0 + 1.0 - 2.0))));
            }
        }
    }
    printf("%.15lf", ans);
}