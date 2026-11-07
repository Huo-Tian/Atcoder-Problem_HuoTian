#include <bits/stdc++.h>
using namespace std;

int n, m;
int v[200100], w[200010];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> w[i];
        v[i] = i;
    }
    int ma = 0;
    for(int i = 1; i <= n; i ++) {
        for(int j = i + 1; j <= n; j ++) {
            for(int k = j + 1; k <= n; k ++) {
                if(v[i] + v[j] + v[k] <= m) {
                    ma = max(ma, w[i] + w[j] + w[k]);
                }
            }
        }
    }
    cout << ma << endl;
}