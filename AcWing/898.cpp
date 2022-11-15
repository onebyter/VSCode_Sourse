#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 15;
int f[N][N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= n; j++)
			f[i][j] = -0x3f3f3f3f;
	f[0][0] = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
	{
		cin >> f[i][j];
		f[i][j] = max(f[i-1][j-1], f[i-1][j]) + f[i][j];
	}
	int res = -1e7;
	for (int i = 1; i <= n; i ++ ) res = max(res, f[n][i]);
	cout << res;
	return 0;
}
