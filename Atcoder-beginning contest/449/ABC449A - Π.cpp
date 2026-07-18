#include <bits/stdc++.h>
using namespace std;

int D;

int main() {
    cin >> D;
    double ans = (D * 0.5) * (D * 0.5);
    ans *= 3.141592653589793;
    printf("%.15lf", ans);
}