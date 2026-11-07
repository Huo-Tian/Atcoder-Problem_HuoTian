#include <bits/stdc++.h>
using namespace std;

int n, m, v[30], w[30];
bool visited[30];
int ans = 0;

inline void dfs(int x, int select, int delicious) {
    if(x == n + 1) {
        if(select <= m) {
            ans = max(ans, delicious);
        }
        return;
    }
    for(int i = 1; i <= n; i ++) {
        if(!visited[i]) {
            visited[i] = true;
            dfs(x + 1, select + v[i], delicious + w[i]);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i ++) {
        cin >> w[i] >> v[i];
    }
    dfs(1, 0, 0);
    cout << ans << endl;
}