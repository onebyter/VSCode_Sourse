#include<iostream>

using namespace std;

const int N = 110;
int a[N][N];
long long ans;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			if (i == 1 || i == n || j == 1 || j == n) ans += a[i][j];
		}
	}
	cout << ans;
	return 0;
}
