#include <algorithm>
#include <cstring>
#include <iostream>
#include <unordered_map>
using namespace std;

int n, m;
const int N = 100010;
int a[N], b[N];
bool check() {
    for (int i = 1; i <= n; i++) {
        if (!b[i])
            return false;
    }
    return true;
}
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d", &a[i]);
        b[a[i]]++;
        if (check()) {
            printf("1");
            for (int j = 1; j <= n; j++) {
                b[j]--;
            }

        } else
            printf("0");
    }
    system("pause");
    return 0;
}
