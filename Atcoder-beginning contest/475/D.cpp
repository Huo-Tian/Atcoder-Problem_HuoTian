#include <bits/stdc++.h>
#include <string>
using namespace std;

string s;
bool b[1000010];
int c[1000010], len = 0;
bool a[10000010];

void prepare() {
    for (int i = 2; i <= 1e7; i++) {
		if (!b[i]) c[++len] = i;
		for (int j = 1; j <= len && i * c[j] <= 1e7; j++) {
			b[i * c[j]] = true;
			if (!(i % c[j])) break;
		}
	}
    for(int i = 1; i <= len; i ++) {
        a[c[i]] = true;
    }
    return;
}

int main() {
    cin >> s;
    prepare();
    string t((int)s.size(), '0');
    for(int i = 2; i <= 1e7; i ++) {
        if(a[i] != true)
            continue;
        t = to_string(i);
        cout << t << endl;
        bool flag = true;
        for(int j = 0; j < s.size(); j ++) {
            for(int k = j + 1; k < s.size(); k ++) {
                if(s[j] == s[k] && t[j] != t[k]){
                    flag = false;
                    break;    
                }
            }
            if(!flag)
                break;
        }
        if(flag == true) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}