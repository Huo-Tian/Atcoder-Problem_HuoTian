#include <bits/stdc++.h>
using namespace std;

int n, m;
struct employee {
    int a, b;
}a[100010];
int dpm_now[100010], dpm_will[100010];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i].a >> a[i].b;
    }
    for(int i = 1; i <= m; i ++) {
        for(int j = 1; j <= n; j ++) {
            if(a[j].a == i) {
                dpm_now[i]++;
            }
            if(a[j].b == i) {
                dpm_will[i]++;
            }
        }
    }
    for(int i = 1; i <= m; i ++) {
        cout << dpm_will[i] - dpm_now[i] << endl;
    }
}