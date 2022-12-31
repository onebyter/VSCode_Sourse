#include <bits/stdc++.h>

using namespace std;

int n;
set<int> v[1000010];
int a[1000010];
int ans[1000010][2];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		int sum = 0, cnt = 0;
		if (i == 0)
			ans[i][0] = ans[i][1] = 0;

		else {
			for (int j = 0; j < i; j++) {
				if (v[a[i]].find(a[j]) != v[a[i]].end()) {
					sum += a[j] % 99999;
					cnt++;
				}
				else {
					int t = a[i] * a[i];
					if (t > a[j])
						continue;
					else {
						while (t < a[j])
							t = t * a[i];
						if (t == a[j]) {
							v[a[i]].insert(a[j]);
							cnt++;
							sum += a[j];
						}
						else
							continue;
					}
				}
			}
			ans[i][0] = cnt, ans[i][1] = sum % 99999;
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d %d\n", ans[i][0], ans[i][1]);
	return 0;
}

