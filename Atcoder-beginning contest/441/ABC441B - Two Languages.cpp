//abc441-b

#include <iostream>
using namespace std;

int n, m;

int q;
string w;

bool takahashi = false, unknown = true, aoki = false;
bool s1[27], t1[27];

int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i ++) {
		char s;
		cin >> s;
		s1[s - 'a' + 1] = true;
	}
	for(int i = 1; i <= m; i++) {
		char t;
		cin >> t;
		t1[t - 'a' + 1] = true;
	}
	cin >> q;
	for(; q--;  ){
		cin >> w;
		int ws = w.size();
		bool w1[27];
		for(int i = 0; i < ws; i ++) {
			w1[w[i] - 'a' + 1] = true;
		}
		for(int i = 1; i <= 26; i ++) {
			if(w1[i] == true) {
				if(s1[i] == true && t1[i] == true && !(takahashi || aoki)) {
					unknown = true;
					takahashi = false;
					aoki = false;
					break;
				} else if(s1[i] == true && t1[i] == false){
					if(aoki != true) {
						unknown = false;
						takahashi = true;	
					} else {
						unknown = true;
						takahashi = false;
						aoki = false;
						break;
					}
				} else if(s1[i] == false && t1[i] == true) {
					if(takahashi != true) {
						unknown = false;
						aoki = true;
					} else {
						unknown = true;
						takahashi = false;
						aoki = false;
						break;
					}
				}
			}
		}
		if(unknown) {
			cout << "Unknown\n";
		}  else if(takahashi == true) {
			cout << "Takahashi\n";
		} else if(aoki == true) {
			cout << "Aoki\n";
		}
	}
}