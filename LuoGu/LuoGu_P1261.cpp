#include <algorithm>
#include <iostream>
using namespace std;

int n;
int a[1005][1005];
int dp[1005][1005];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++) {
            cin >> a[i][j];
        }
    dp[0][0] = a[0][0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i - 1 < 0 || j - 1 < 0) {
                dp[i][j] = dp[i - 1][j] + a[i][j];
            } else {
                dp[i][j] =
                    max(dp[i - 1][j - 1] + a[i][j], dp[i - 1][j] + a[i][j]);
            }
        }
    }
    int m = 0;
    for (int i = 0; i < n; i++) {
        if (m < dp[n - 1][i]) {
            m = dp[n - 1][i];
        }
    }
    cout << m;
    system("pause");
    return 0;
}
