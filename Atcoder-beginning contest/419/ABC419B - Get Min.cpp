#include <bits/stdc++.h>
using namespace std;

struct Balls {
	int balls[1010], front, rear;
}balls;


int q;

int main() {
	cin >> q;
	balls.front = 1, balls.rear = 0;
	for(; q--; ){
		int opt;
		cin >> opt;
		if(opt == 1) {
			int x;
			cin >> x;
			balls.balls[++balls.rear] = x;
		} else {
			sort(balls.balls + balls.front, balls.balls + balls.rear);
			cout << balls.balls[balls.front] << endl;
			balls.front ++;
		}
	}
}