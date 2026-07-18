#include <bits/stdc++.h>
using namespace std;

int N, x = 0;

int main() {
    cin >> N;
    for (int i = 1; i < N; i ++) {
        for (int j = i + 1; j <= N; j ++) {
            cout << "? " << i << " " << j << endl;
            string s;
            cin >> s;
            if (s == "Yes") {
                x ++;
            }
        }
    }
    cout << "! " << x << endl;
}
//交互题！