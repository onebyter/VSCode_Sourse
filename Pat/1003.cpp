/*
 * @pintia psid=994805260223102976 pid=994805323154440192 compiler=GXX
 *
 * ProblemSet: PAT (Basic Level) Practice （中文）
 *
 * Title: 1003 我要通过！
 *
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805323154440192
 *
 */

// @pintia code=start
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

bool judge(string s) {
    int pp = -1, pt = -1;
    char mp[85];
    memset(mp, 0, sizeof mp);
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
        if (s[i] != 'P' && s[i] != 'A' && s[i] != 'T')
            return false;
        if (pp == -1 && s[i] == 'P') {
            pp = i;
        }
        if (pt == -1 && s[i] == 'T') {
            pt = i;
        }
    }
    if (pp > pt || pp + 1 == pt)
        return false;
    if (mp['P'] != 1 || mp['A'] < 1 || mp['T'] != 1)
        return false;
    int r = s.size() - 1 - pt;
    int lb = pt - pp - 1;
    int la = pp;
    if (r != lb * la)
        return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(), cout.tie();
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (judge(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

// @pintia code=end