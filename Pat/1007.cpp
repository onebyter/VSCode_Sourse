/*
 * @pintia psid=994805260223102976 pid=994805317546655744 compiler=GXX
 *
 * ProblemSet: PAT (Basic Level) Practice （中文）
 *
 * Title: 1007 素数对猜想
 *
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805317546655744
 *
 */

// @pintia code=start
#include <iostream>
using namespace std;
const int N = 1e5 + 10;
int primes[N];
bool v[N];
int n, cnt;
void get_primes() {
    for (int i = 2; i <= n; i++) {
        if (!v[i])
            primes[cnt++] = i;
        for (int j = 0; primes[j] <= n / i; j++) {
            v[primes[j] * i] = true;
            if (i % primes[j] == 0)
                break;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(), cout.tie();
    cin >> n;
    get_primes();
    int ans = 0;
    for (int i = 1; i < cnt; i++) {
        if (primes[i] - primes[i - 1] == 2)
            ans++;
    }
    cout << ans;
    return 0;
}

// @pintia code=end