#include <bits/stdc++.h>
using namespace std;

int n;
int a[700010];

bool cmp(int a, int b) {
    return a > b;
} 

int main() {
    std::cin >> n;
    for(int i = 1; i <= n; i ++) {
        std::cin >> a[i];
    }
    int b[200100];
    int front, rear;
    front = 1, rear = 0;
    for(int i = 1; i <= 3; i ++) {
        b[++ rear] = a[i];
    }
    for(int i = 3; i <= n; i ++) {
        sort(a + 1, a + i + 1, cmp);
        std::cout << a[3] << std::endl;
    }
}
