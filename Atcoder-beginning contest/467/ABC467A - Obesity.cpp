#include <bits/stdc++.h>
using namespace std;

double h, w;

int main() {
    cin >> h >> w;
    h /= 100.0;
    cout << (w / (h * h) >= 25.0 ? "Yes" : "No");
}