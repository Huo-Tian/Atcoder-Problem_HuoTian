#include <bits/stdc++.h>
#define 整数 int
#define 布尔 bool
#define 输入 cin
#define 输出 cout
#define 换行 endl
#define 如果 if
#define 循环 for
using namespace std;

整数 n;
整数 a[200010], ans = 0;
布尔 b[200010];

整数 main() {
    输入 >> n;
    循环(整数 i = 1; i <= n; i ++) {
        输入 >> a[i];
    }
    循环(整数 i = 1; i <= n; i ++) {
        循环(整数 j = i + 1; j <= n; j ++) {
            如果(b[i] != true && b[j] != true && a[i] == a[j]) {
                // 1. b数组记一下“每个点有没有被删除掉，删除掉了即为true”
                // 2. 用一个cnt 去枚举-1, -2, ..., -?
                b[i] = b[j] = true;
            }
        }
    }
    循环(整数 i = 1; i <= n; i ++) {
        if(!b[i])
            ans += a[i];
    }
    输出 << ans << 换行;
}