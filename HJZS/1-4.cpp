#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 1000010;
int a[N], b[N];
int n, m;

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i ++ ) {
		scanf("%d", &a[i]);
		b[i] = a[i] - a[i - 1];
	}
	int l, r, c;
	while (m -- ) {
		scanf("%d%d%d", &l, &r, &c);
		b[l] += c;
		b[r + 1] -= c;
	}
	int mi = 0x3f3f3f3f;
	for (int i = 1; i <= n; i ++ ) {
		b[i] += b[i - 1];
		if (b[i] < mi) {
			mi = b[i];
		}
	}
	return 0;
}
