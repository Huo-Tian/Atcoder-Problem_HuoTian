#include <bits/stdc++.h>
using namespace std;

int n;
int a[200010];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i += 10) {
        for(int j = i; j <= min(i + 9, n); j ++) {
            if(!(a[j] >= i && a[j] <= min(i + 9, n))) {
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";
}