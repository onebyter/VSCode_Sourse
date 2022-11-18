#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N = 110;
const int mod = 1000000007;
int a[N];
int n, ans = 1;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			ans *= gcd(a[i], a[j]) % mod;
	}
	cout << ans << endl;
	return 0;
}
