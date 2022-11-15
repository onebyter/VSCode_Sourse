#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> PII;

bool cmp(PII &a, PII &b) {
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int res;

int main() {
    vector<PII> segs;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int l, r;
        scanf("%d%d", &l, &r);
        segs.push_back({l, r});
    }
    sort(segs.begin(), segs.end(), cmp);
    int st = segs[0].first, ed = segs[0].second;
    for (auto it : segs) {
        if (ed < it.second) {
            if (ed < it.first) {
                res++;
                st = it.first;
            }
            ed = it.second;
        }
    }
    cout << res;
    system("pause");
    return 0;
}