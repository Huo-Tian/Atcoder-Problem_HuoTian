#include <bits/stdc++.h>
using namespace std;

double h, w;

int main() {
    cin >> h >> w;
    cout << (w / h / h * 10000.0 >= 25.0 ? "Yes" : "No");
}