#include <bits/stdc++.h>
using namespace std;

string x = "HelloWorld";

int main() {
    int t;
    cin >> t;
    t--;
    for (int i = 0; i < t; i++)
        cout << x[i];
    int xl = x.size();
    for (int i = t + 1; i < xl; i++)
        cout << x[i];
}