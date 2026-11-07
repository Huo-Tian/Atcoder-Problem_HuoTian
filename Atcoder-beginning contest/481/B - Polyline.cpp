#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[200010];
bool visited[200010];

int main() {
    int ans = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i ++) {
        if(a[i] == k) {
            ans ++;
            visited[i] = true;
        }   
    }
    for(int i = 1; i < n; i ++) {
        if((k >= a[i] && k <= a[i + 1] && visited[i] != true & visited[i + 1] != true) || (k <= a[i] && k >= a[i + 1] && visited[i] != true & visited[i + 1] != true)) {
            ans ++;
        }
    }
    cout << ans << endl;
}