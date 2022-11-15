#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <climits>
using namespace std;

const int N = 100010;
struct Node
{
	int l, r;
	int mv;
} tr[N * 5];

int n, m;
int w[N];

void build(int u, int l, int r)
{
	if (l == r) tr[u] = {l, r, w[l]};
	else
	{
		tr[u] = {l, r};
		int mid = l + r >> 1;
		build(u << 1, l , mid), build(u << 1 | 1, mid + 1, r);
		tr[u].mv = max(tr[u<<1].mv, tr[u<<1|1].mv);
	}
}

int query(int u, int l, int r)
{
	if (tr[u].l >= l && tr[u].r <= r) return tr[u].mv;
	int mid = tr[u].l + tr[u].r >> 1;
	int mv = INT_MIN;
	if (l <= mid) mv =  query(u<<1, l, r);
	if (r > mid) mv = max(mv, query(u<<1|1, l, r));
	return mv;
}

int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i ++ ) scanf("%d", &w[i]);
	build(1, 1, n);
	int l, r;
	while (m--)
	{
		scanf("%d%d", &l, &r);
		printf("%d\n", query(1, l, r));
	}
	return 0;
}
