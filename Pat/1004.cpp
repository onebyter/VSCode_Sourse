/*
 * @pintia psid=994805260223102976 pid=994805321640296448 compiler=GXX
 *
 * ProblemSet: PAT (Basic Level) Practice （中文）
 *
 * Title: 1004 成绩排名
 *
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805321640296448
 *
 */

// @pintia code=start

#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

struct stu {
    char name[12];
    char sno[12];
    int score;
} s[1000];
bool cmp(stu &a, stu &b) { return a.score > b.score; }
int n;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(), cout.tie();
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].sno >> s[i].score;
    }
    sort(s, s + n, cmp);
    cout << s[0].name << " " << s[0].sno << endl;
    cout << s[n - 1].name << " " << s[n - 1].sno;
    return 0;
}

// @pintia code=end