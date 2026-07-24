#include <bits/stdc++.h>
using namespace std;

int n, a[11];

int main() {
    cin >> n;
    while(n) {
        a[(n % 10)] ++;
        n /= 10;
    }

}