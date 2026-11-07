#include <bits/stdc++.h>
using namespace std;

char a, b, c, d;

int main() {
    cin >> a >> b;
    scanf("\n");
    cin >> c >> d;
    int wherea = (a == 'A' ? 1 : (b == 'A' ? 2 : (c == 'A' ? 3 : 4)));
    int whereb = (a == 'D' ? 1 : (b == 'D' ? 2 : (c == 'D' ? 3 : 4)));
    if(wherea == 1)
        if(whereb == 2 || whereb == 3)
            cout << "Yes\n";
        else
            cout << "No\n";
    else if(wherea == 2) 
        if(whereb == 1 || whereb == 4)
            cout << "Yes\n";
        else
            cout << "No\n";
    else if(wherea == 3)
        if(whereb == 1 || whereb == 4)
            cout << "Yes\n";
        else
            cout << "No\n";
    else
        if(whereb == 3 || whereb == 2)
            cout << "Yes\n";
        else
            cout << "No\n";
}