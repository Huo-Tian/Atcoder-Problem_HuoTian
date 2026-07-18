#include <bits/stdc++.h>
using namespace std;

int    n;
string s[100110];
int    c[100010];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n; i++)
        if (s[i][0] >= 'a' && s[i][0] <= 'c')
            c[i] = 2;
        else if (s[i][0] >= 'd' && s[i][0] <= 'f')
            c[i] = 3;
        else if (s[i][0] >= 'g' && s[i][0] <= 'i')
            c[i] = 4;
        else if (s[i][0] >= 'j' && s[i][0] <= 'l')
            c[i] = 5;
        else if (s[i][0] >= 'm' && s[i][0] <= 'o')
            c[i] = 6;
        else if (s[i][0] >= 'p' && s[i][0] <= 's')
            c[i] = 7;
        else if (s[i][0] >= 't' && s[i][0] <= 'v')
            c[i] = 8;
        else if (s[i][0] >= 'w' && s[i][0] <= 'z')
            c[i] = 9;
    for (int i = 1; i <= n; i++) {
        cout << c[i];
    }
}