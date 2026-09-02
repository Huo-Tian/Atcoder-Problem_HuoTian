#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
    cin >> a >> b;
    cout << (a + b == 9 || a - b == 9 || a * b == 9 || (a / b == 9 && a % b == 0) ? "Nine" : "Nein");
}