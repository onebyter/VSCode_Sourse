/*
 * @pintia psid=994805260223102976 pid=994805324509200384 compiler=GXX
 *
 * ProblemSet: PAT (Basic Level) Practice （中文）
 *
 * Title: 1002 写出这个数
 *
 * https://pintia.cn/problem-sets/994805260223102976/problems/994805324509200384
 *
 */

// @pintia code=start
#include <cstring>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(), cout.tie();
    string s;
    cin >> s;
    int ans = 0;
    for (char c : s) {
        ans += c - '0';
    }
    unordered_map<char, string> mp{
        {'1', "yi"},  {'2', "er"}, {'3', "san"}, {'4', "si"},  {'5', "wu"},
        {'6', "liu"}, {'7', "qi"}, {'8', "ba"},  {'9', "jiu"}, {'0', "ling"}};
    string ss = to_string(ans);
    for (int i = 0; i < ss.length(); i++) {
        if (i != ss.length() - 1)
            cout << mp[ss[i]] << " ";
        else
            cout << mp[ss[i]];
    }
    return 0;
}

// @pintia code=end