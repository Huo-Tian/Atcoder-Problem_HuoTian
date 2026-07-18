#include <bits/stdc++.h>
using namespace std;

int n, ans = 0;
char l[200100], r[200100];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> l[i] >> r[i];
        //cout << l[i] << r[i] << endl;
    }
    for(int i = 1; i < n; i ++)
        if(r[i] == l[i + 1]) {
            //cout << r[i] << " " << l[i + 1] << endl;
            ans ++;
        }
    cout << ans << endl;
}