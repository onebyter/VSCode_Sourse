#include <iostream>
using namespace std;
const int N = 100010;
int l[N], r[N], n, ans = 1;
int w[N];

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &w[i]);
		l[i] = 1;
		if (w[i] > w[i-1])
		{
			l[i] = l[i-1] + 1;
		}
	}
	for (int i = n; i; i--)
	{
		r[i] = 1;
		if (w[i+1] > w[i])
		{
			r[i] = r[i+1] + 1;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		ans = max(ans, max(l[i], r[i]));
		if (w[i - 1] < 1e9) {
			ans = max(ans, l[i - 1] + 1);
		}
		if (w[i + 1] > 1) {
			ans = max(ans, r[i + 1] + 1);
		}
		if (w[i+1] - w[i-1]>= 2)
		{
			ans = max(ans, l[i-1] + r[i+1] + 1);
		}
	}
	
	cout << ans;
	return 0;
}
