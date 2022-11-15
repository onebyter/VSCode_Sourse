/*
 * @pintia psid=994805260223102976 pid=994805316250615808 compiler=GXX
 *
 * ProblemSet: PAT (Basic Level) Practice （中文）
 *
 * Title: 1008 数组元素循环右移问题
 *
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805316250615808
 *
 */

// @pintia code=start
#include <iostream>
using namespace std;
const int N = 110;
int n, m;
int a[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(), cout.tie();
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++) {
        int temp = a[n - 1];
        for (int j = n - 1; j > 0; j--) {
            a[j] = a[j - 1];
        }
        a[0] = temp;
    }
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
    }
    cout << a[n - 1];
    return 0;
}

// @pintia code=end