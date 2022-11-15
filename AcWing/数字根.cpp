#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	string s;
	while (cin >> s)
	{
		if (s == "0") break;
		int n = 0;
		for (int i = 0; i < s.size(); i++) n += (s[i] - '0');
		while (n > 9)
		{
			int res = 0;
			while (n)
			{
				res += n % 10;
				n /= 10;
			}
			n = res;
		}
		cout << n << endl;
	}
	return 0;
}
