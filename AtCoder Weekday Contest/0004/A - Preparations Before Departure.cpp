#include <bits/stdc++.h>
using namespace std;

int n, s, t;
int a[110];

int main() {
    cin >> n >> s >> t;
    int sum = 0;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        sum += a[i];
    }
    s += sum / 60;
    sum %= 60;
    if(s > t || (s == t && sum >= 1)) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
    }
}