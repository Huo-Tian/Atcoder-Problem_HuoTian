#include <bits/stdc++.h>
using namespace std;

int i, j;

int main() {
	scanf("%d-%d", &i, &j);
	if(j < 8) {
		printf("%d-%d", i, j + 1);
	} else if (i < 8 && j == 8) {
		printf("%d-%d", i + 1, 1);
	} else if(i == 8 && j == 8) {
		printf("%d-%d", i, j);
	}
}
