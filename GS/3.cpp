#include <bits/stdc++.h>

using namespace std;

int m, s, c;
int t[210];
int ch[210];
int main() {
	cin >> m >> s >> c;
	int cnt = m - 1;
	for (int i = 0; i < c; i++)
		cin >> t[i];
	sort(t, t + c);
	for (int i = 1; i < c; i++)
		ch[i] = t[i] - t[i - 1] - 1;
	sort(ch + 1, ch + c, greater<int>());
	int sum = 0;
	for (int i = 0; i < cnt; i++)
		sum += ch[i + 1];
	cout << t[c - 1] - t[0] + 1 - sum;
	return 0;
}
