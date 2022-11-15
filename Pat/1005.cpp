/*
 * @pintia psid=994805260223102976 pid=994805320306507776 compiler=GXX
 *
 * ProblemSet: PAT (Basic Level) Practice （中文）
 *
 * Title: 1005 继续(3n+1)猜想
 *
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805320306507776
 *
 */

// @pintia code=start
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
bool v[10000];
int a[110];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(), cout.tie();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        int t = a[i];
        while (t != 1) {
            if (t % 2 == 0) {
                t /= 2;
                v[t] = true;
            } else {
                t = (3 * t + 1) / 2;
                v[t] = true;
            }
        }
    }
    sort(a, a + n, greater<int>());
    int t[110];
    int p = 0;
    for (int i = 0; i < n; i++) {
        if (!v[a[i]])
            t[p++] = a[i];
    }
    for (int i = 0; i < p - 1; i++) {
        cout << t[i] << " ";
    }
    cout << t[p - 1];
    return 0;
}

// @pintia code=end