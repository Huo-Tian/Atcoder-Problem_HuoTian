#include <bits/stdc++.h>
using namespace std;

string s;
int valc[10010], b[3], cnt = 0;

int main() {
	cin >> s;
    memset(valc, 0, sizeof(valc));
	for(int i = 0; i < s.size(); i ++) {
		valc[s[i] - 'a' + 1]++;
    }
	for(int i = 1; i <= 26; i ++) {
		//cout << valc[i] << " ";
		if(valc[i] > 0) {
            b[++cnt] = i;
        }
	}
	printf("%c\n", min(valc[b[1]], valc[b[2]]) + 'a' - 1);
}