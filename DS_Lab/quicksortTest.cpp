#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;
int q[100010];

void qsort(int q[], int l, int r) {
    if (l >= r)
        return;
    int p = q[(l + r) >> 1];
    int i = l - 1, j = r + 1;
    while (i < j) {
        do
            i++;
        while (q[i] < p);
        do
            j--;
        while (q[j] > p);
        if (i < j)
            swap(q[i], q[j]);
    }
    qsort(q, l, i - 1);
    qsort(q, i, r);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    qsort(q, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", q[i]);
    system("pause");
    return 0;
}