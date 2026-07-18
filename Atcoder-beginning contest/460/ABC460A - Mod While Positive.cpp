#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int cnt = 0;
    while (m != 0) {
        cnt++;
        m = n % m;
    }
    cout << cnt << endl;
}