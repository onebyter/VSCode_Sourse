#include<iostream>
#include<algorithm>
using namespace std;

const int N = 110;
struct stu
{
	int s, p, sum;
};
stu st[N];
bool cmp(stu& a, stu& b)
{
	if (a.s == b.s && a.sum == b.sum) return a.p < b.p;
	else if (a.sum == b.sum) return a.s < b.s;
	return a.sum < b.sum;
}
bool flag = true;
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> st[i].s >> st[i].p, st[i].sum = st[i].s + st[i].p;
	sort(st, st + n, cmp);
	int ans = 0;
	int k = 0;
	while (m >= st[k].sum && k < n)
	{
		ans++;
		m -= st[k++].sum;
		if (m < st[k].sum && flag)
		{
			st[k].s /= 2;
			st[k].sum = st[k].s + st[k].p;
			flag = false;
		}

	}
	cout << ans;
	return 0;
}
