/*
 * @pintia psid=994805260223102976 pid=994805318855278592 compiler=GXX
 *
 * ProblemSet: PAT (Basic Level) Practice （中文）
 *
 * Title: 1006 换个格式输出整数
 *
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805318855278592
 *
 */

// @pintia code=start
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(), cout.tie();
    string s;
    cin >> s;
    string ans = "";
    if (s.size() == 3) {
        ans += string(s[0] - '0', 'B');
        ans += string(s[1] - '0', 'S');
        for (int i = 1; i <= s[2] - '0'; i++) {
            ans += to_string(i);
        }
    } else if (s.size() == 2) {
        ans += string(s[0] - '0', 'S');
        for (int i = 1; i <= s[1] - '0'; i++) {
            ans += to_string(i);
        }
    } else {
        for (int i = 1; i <= s[0] - '0'; i++) {
            ans += to_string(i);
        }
    }
    cout << ans;
    return 0;
}
// @pintia code=end