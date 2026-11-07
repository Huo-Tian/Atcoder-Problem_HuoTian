#include <bits/stdc++.h>
#define f first
#define e second
using namespace std;

int n, cnt = 0;
string s;
pair<string, int> a[200010];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        if(cnt == 0) {
            a[++cnt].f = s;
            a[cnt].e = 1;
        } else {
            bool findit = false;
            for(int i = 1; i <= cnt; i ++) {
                if(a[i].f == s) {
                    a[i].e ++;
                    findit = true;
                    break;
                }
            }
            if(!findit) {
                a[++cnt].f = s;
                a[cnt].e = 1;
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i ++) {
        ans = max(ans, a[i].e);
    }
    cout << ans << endl;
} 