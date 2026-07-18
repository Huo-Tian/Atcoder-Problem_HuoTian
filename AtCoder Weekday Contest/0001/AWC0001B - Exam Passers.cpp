#include <bits/stdc++.h>
using namespace std;

int n, l, r, ans = 0;
int ansat = INT_MAX, tl = 0;

struct Stu {
    int v, at;
}p[200010], true_list[200010];

bool cmp(Stu x, Stu y) {
    if(x.v == y.v) return x.at < y.at;
    return x.v > y.v;   
}

int main() {
    cin >> n >> l >> r;
    for(int i = 1; i <= n; i ++) {
        cin >> p[i].v;
        p[i].at = i;
        if(p[i].v >= l && p[i].v <= r) {
            true_list[++tl].v = p[i].v;
            true_list[tl].at = p[i].at;
        }
    }
    
    if(tl == 0) {
        cout << -1 << endl;
        return 0;
    }
    sort(true_list + 1, true_list + tl + 1, cmp);
    for(int i = 1; i <= tl; i ++) {
        if(true_list[i].v > ans) {
            ans = true_list[i].v;
            ansat = true_list[i].at;
        }
    }
    cout << true_list[1].at << endl;
}