#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

const int N = 100010;

int a[N], b[N];

int n, m, x;

int main() {
    scanf("%d%d%d", &n, &m, &x);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    int i = 0, j = m - 1;
    for (; i < n && j >= 0;) {
        if (a[i] + b[j] > x)
            j--;
        else if (a[i] + b[j] < x)
            i++;
        else {
            printf("%d %d", i, j);
            return 0;
        }
    }
    system("pause");
    return 0;
}