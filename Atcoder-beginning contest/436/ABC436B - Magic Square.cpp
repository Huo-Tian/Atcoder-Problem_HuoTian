#include <bits/stdc++.h>
using namespace std;

int n;

int a[100][100];

int main(){
    cin >> n;
    a[0][(n - 1) / 2] = 1;
    int r = 0, c = (n - 1) / 2, k = 1;
    for(int i = 1; i <= n * n - 1; i ++) {
        int nr = (r - 1) % n, nc = (c + 1) % n, nk = k + 1;
        if(nr < 0){ 
            nr = n + (r - 1);
        }
        //cout << nr << endl;
        if(a[nr][nc] == 0) {
            a[nr][nc] = k + 1;
            r = nr, c = nc, k = nk;
        } else {
            a[(r + 1) % n][c] = k + 1;
            r = (r + 1) % n, c = c, k ++;
        }
    }
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}