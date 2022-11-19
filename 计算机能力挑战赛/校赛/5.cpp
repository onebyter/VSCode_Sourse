#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N = 20010;
int v[35], n, m;
int f[N];
int main()
{
	cin >> m >> n;
	for (int i = 0; i < n; i++)
		cin >> v[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = m; j >= v[i]; j--)
			f[j] = max(f[j], f[j - v[i]] + v[i]);

	}
	cout << m - f[m];
	return 0;
}
