#include<bits/stdc++.h>
using namespace std;

int x, y;

int gcd(int a, int b) {
    if (b)
        return gcd(b, a % b);
    else
        return a;
}

int main() {
    cin >> x >> y;
    if(x <= y) 
        cout << "No\n";
    else
        cout << ((x / gcd(x, y) == 16 && y / gcd(x, y) == 9) ? "Yes" : "No");
}