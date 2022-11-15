/*
 * @pintia psid=994805260223102976 pid=994805325918486528 compiler=GXX
 *
 * ProblemSet: PAT (Basic Level) Practice （中文）
 *
 * Title: 1001 害死人不偿命的(3n+1)猜想
 *
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805325918486528
 *
 */

// @pintia code=start
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(), cout.tie();
    int n;
    cin >> n;
    int ans = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = (3 * n + 1) / 2;
        }
        ans++;
    }
    cout << ans;
    return 0;
}

// @pintia code=end
