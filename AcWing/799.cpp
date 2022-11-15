#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 100010;
int a[N], h[N];

int n, res;

int main() {
    cin >> n;
    for (int i = 0, j = 0; i < n; i++) {
        scanf("%d", &a[i]);
        h[a[i]]++;
        while (h[a[i]] > 1) {
            h[a[i]]--;
            j++;
        }
        res = max(res, i - j + 1);
    }
    printf("%d\n", res);
    system("pause");
    return 0;
}