#include<iostream>

using namespace std;
int n, ans;
int main()
{
	cin >> n;
	while (n--)
	{
		int st;
		cin >> st;
		if ((st >> 3 & 1) || (st >> 2 & 1))
			ans++;
	}
	cout << ans;
	return 0;
}
