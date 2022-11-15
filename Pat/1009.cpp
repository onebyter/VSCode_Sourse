/*
 * @pintia psid=994805260223102976 pid=994805314941992960 compiler=GXX
 *
 * ProblemSet: PAT (Basic Level) Practice （中文）
 *
 * Title: 1009 说反话
 *
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805314941992960
 *
 */

// @pintia code=start
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(), cout.tie();
    string s[105];
    int i = 0;
    while (cin >> s[i])
        i++;
    for (int j = i - 1; j >= 1; j--)
        cout << s[j] << " ";
    cout << s[0];
    return 0;
}

// @pintia code=end