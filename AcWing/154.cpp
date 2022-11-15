#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int N = 100010;
int a[N], q[N];
int hd, tl;

int n, k;

int main() {
    // ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (hd < tl && i - q[hd] + 1 > k)
            hd++;
        while (hd < tl && a[q[tl - 1]] >= a[i])
            tl--;
        q[tl++] = i;
        if (i + 1 >= k)
            cout << a[q[hd]] << " ";
    }
    system("pause");
    return 0;
}