#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 100010;
int e[N], ne[N];
int head, idx;

void init() {
    head = -1;
    idx = 0;
}
void add(int x) {
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx++;
}
void insert(int k, int x) {
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    idx++;
}
void remove(int k) { ne[k] = ne[ne[k]]; }

int main() {
    int m;
    scanf("%d", &m);
    init();
    while (m--) {
        char op;
        cin >> op;
        int n, k;
        if (op == 'H') {
            scanf("%d", &n);
            add(n);
        } else if (op == 'I') {
            scanf("%d%d", &k, &n);
            insert(k - 1, n);
        } else {
            scanf("%d", &k);
            if (k == 0)
                head = ne[head];
            else
                remove(k - 1);
        }
    }
    for (int i = head; i != -1; i = ne[i])
        printf("%d ", e[i]);
    system("pause");
    return 0;
}
