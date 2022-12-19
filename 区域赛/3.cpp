#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1010;
int f[N][N];
int v[N], w[N];
int n, m;
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
		cin >> v[i] >> w[i];
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			f[i][j] = f[i - 1][j];
			if (j >= v[i])
				f[i][j] = max(f[i][j], f[i - 1][j - v[i]] + w[i]);
		}
	}
	cout << f[m][n];
	return 0;
}
