#include <bits/stdc++.h>
using namespace std;

int n;
int a[200100];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    int x = 0, y = 0, z = 0;
    for(int i = 1; i <= n; i ++) {
        int x = (a[i] % 1000 == 0 ? a[i] / 1000 : a[i] / 1000 + 1);
        int ans = x;
        int sum = 1000 * x - a[i];
        x += sum / 100 % 10;
        y += sum / 10 % 10;
        z += sum % 10;
    }
        cout << x << " " << y << " " << z << "\n";
}