#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;
typedef pair<int, int> PII;

const int N = 3010;
int n;
int q[N];

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    if (a.first != b.first)
        return a.first < b.first;
    return a.second < b.second;
}

int a, b, c;
int main() {
    scanf("%d", &n);
    vector<PII> s;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &q[i]);
        s.push_back({q[i], i});
    }
    sort(s.begin(), s.end(), cmp);
    for (auto it = s.begin(); it != s.end(); it++) {
        if (!a)
            a = it->second;
        else if (a && !b && it->first > q[a])
            b = it->second;
        else if (a && b && !c && it->first > q[b])
            c = it->second;
    }
    if (q[a] < q[b] && q[b] < q[c])
        printf("%d %d %d", a, b, c);
    else
        printf("-1 -1 -1");
    system("pause");
    return 0;
}
