#include<iostream>
using namespace std;
const int N = 200010;
int a[N];
long long ans, sum;
int n;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	for (int i = 0; i < n; i++) {
		ans += a[i] * (sum - a[i]);
	}
	cout << ans / 2;
	return 0;
}
