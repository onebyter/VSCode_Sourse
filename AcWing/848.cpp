#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 110, M = N;
int h[N], e[M], ne[M], idx = 1;
int q[N], hd = 0, tl = 0, d[N];
int n, m;
void add(int a, int b) // 添加一条边a->b
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

bool bfs() {
    for (int i = 1; i <= n; i++)
        if (!d[i])
            q[tl++] = i;
    while (hd < tl) {
        int t = q[hd++];
        for (int i = h[t]; i; i = ne[i]) {
            int j = e[i];
            d[j]--;
            if (!d[j])
                q[tl++] = j;
        }
    }
    return tl == n;
}

int main() {
    // ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        add(a, b);
        d[b]++;
    }
    if (bfs()) {
        for (int i = 0; i < n; i++)
            cout << q[i] << " ";
    } else
        cout << "-1\n";
    system("pause");
    return 0;
}