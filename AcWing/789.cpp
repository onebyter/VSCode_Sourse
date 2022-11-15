// Acwing 789数的范围 二分模板
#include <iostream>
using namespace std;
const int N = 100010;
int n, m, x, a[N];
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    while (m--) {
        scanf("%d", &x);
        int l = 0, r = n - 1;
        while (l < r) {
            int mid = l + r >> 1;
            if (a[mid] < x)
                l = mid + 1;
            else
                r = mid;
        }
        if (a[l] != x) {
            // printf("-1 -1\n");
            printf("%d \n", l);
            continue;
        }
        int l2 = l, r2 = n - 1;
        while (l2 < r2) {
            int mid = l2 + r2 + 1 >> 1;
            if (a[mid] <= x)
                l2 = mid;
            else
                r2 = mid - 1;
        }
        printf("%d %d\n", l, l2);
    }
    system("pause");
    return 0;
}
