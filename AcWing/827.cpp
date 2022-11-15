#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 100;

int e[N], l[N], r[N], idx;

void init() {
    r[0] = 1;
    l[1] = 0;
    idx = 2;
}
void add(int k, int x) {
    e[idx] = x;
    r[idx] = r[k];
    l[idx] = l[r[k]];
    l[r[k]] = idx;
    r[k] = idx;
    idx++;
}
void remove(int k) {
    l[r[k]] = l[k];
    r[l[k]] = r[k];
}

int main() {
    init();
    int m;
    scanf("%d", &m);
    while (m--) {
        string op;
        int k, x;
        cin >> op;
        if (op == "L") {
            scanf("%d", &x);
            add(0, x);
        } else if (op == "R") {
            scanf("%d", &x);
            add(l[1], x);
        } else if (op == "D") {
            scanf("%d", &k);
            remove(k + 1);
        } else if (op == "IL") {
            scanf("%d%d", &k, &x);
            add(l[k + 1], x);
        } else {
            scanf("%d%d", &k, &x);
            add(k + 1, x);
        }
    }
    for (int i = r[0]; i != 1; i = r[i])
        printf("%d ", e[i]);
    system("pause");
}
