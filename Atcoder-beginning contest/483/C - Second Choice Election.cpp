#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[200100];
int b[200010];
vector<int> c;
vector<int> first_choose[200010];

int main() {
    cin >> n >> m;
    c.resize(n + 1);
    for (int i = 1; i <= m; i ++) {
        cin >> a[i] >> b[i];
        c[a[i]] ++;
        first_choose[a[i]].push_back(i);
    }
    for (int i = 1; i <= n; i ++) {
        vector<int> d = c;
        c[i] = 0;
        int ma, maid;
        ma = maid = 0;
        for (auto y : first_choose[i]) {
            c[b[y]] ++;
        }
        for(int j = 1; j <= m; j ++) {
            if(c[j] > ma)
                ma = c[j], maid = j;
        }
        cout << maid << "\n";
        c = d;
    }
}