#include <bits/stdc++.h>
using namespace std;

int head, body;

int main() {
	cin >> head >> body;
	cout << (head - body >= 0 ? head - body : 0);
}