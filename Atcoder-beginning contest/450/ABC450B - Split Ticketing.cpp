#include <bits/stdc++.h>
using namespace std;

int n;
int C[110][110];

int main() {
    cin >> n;
    for(int i = 1; i < n; i ++) {
        for(int j = i + 1; j <= n; j ++) {
            cin >> C[i][j];
        }
    }
    for(int a = 1; a < n - 1; a ++) {
        for(int b = a + 1; b < n; b ++) {
            for(int c = b + 1; c <= n; c ++) {
                if(C[a][b] + C[b][c] < C[a][c]) {
                    cout << "Yes\n";
                    return 0;
                }
            }
        }
    }
    cout << "No\n";
}