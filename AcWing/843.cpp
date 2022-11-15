#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 20;
char mp[N][N];
bool dg[N], udg[N], col[N];
int n;
void init(int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mp[i][j] = '.';
}

void dfs(int u) {
    if (u == n) {
        for (int i = 0; i < n; i++)
            cout << mp[i] << "\n";
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!dg[i - u + n] && !udg[u + i] && !col[i]) {
            dg[i - u + n] = udg[u + i] = col[i] = true;
            mp[u][i] = 'Q';
            dfs(u + 1);
            mp[u][i] = '.';
            dg[i - u + n] = udg[u + i] = col[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> n;
    init(n);
    dfs(0);
    system("pause");
    return 0;
}