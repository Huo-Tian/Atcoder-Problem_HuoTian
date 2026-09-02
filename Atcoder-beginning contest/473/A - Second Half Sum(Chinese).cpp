#include <bits/stdc++.h>
#define 整数 int
#define 输入 cin
#define 输出 cout
#define 换行 endl
using namespace std;

整数 n, a[200010];
整数 ans = 0;

整数 main() {
    输入 >> n;
    for(整数 i = 1; i <= n; i ++) {
        输入 >> a[i];
        if(i >= n / 2 + 1)
            ans += a[i];
    }
    输出 << ans << 换行;
}