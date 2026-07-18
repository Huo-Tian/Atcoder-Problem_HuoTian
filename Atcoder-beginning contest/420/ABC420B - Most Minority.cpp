#include <bits/stdc++.h>
using namespace std;

int n, m;
string s[105];
int people[1001];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> s[i];
    }
    for(int i = 0; i < m; i ++) {
        int fa = 0, tr = 0;
        for(int j = 1; j <= n; j ++) {
            if(s[j][i] == '0')
                fa++;
            else
                tr++;
        }
        if(fa == 0 || tr == 0) {
            for(int j = 1; j <= n; j++){
                people[j] ++;
            }
        } else if(fa < tr) {
            for(int j = 1; j <= n; j++){
                if(s[j][i] == '0')
                    people[j] ++;
            }
        } else {
            for(int j = 1; j <= n; j++){
                if(s[j][i] == '1')
                    people[j] ++;
            }
        }
    }
    int ma = 0;
    for(int i = 1; i <= n; i ++) {
        if(people[i] > ma)
            ma = people[i];
    }
    for(int i = 1; i <= n; i ++) {
        if(people[i] == ma)
            cout << i << " ";
    }
}