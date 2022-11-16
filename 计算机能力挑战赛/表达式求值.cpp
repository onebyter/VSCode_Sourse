#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, int> mp
{
	{'+', 1},
	{'*', 2},
	{'%', 2}
};

int calcu(int a, int b, char op)
{
	if (op == '+') return a + b;
	if (op == '*') return a * b;
	return a % b;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c, ans = 0;
		char op1, op2;
		cin >> a >> op1 >> b >> op2 >> c;
		if (mp[op1] >= mp[op2])
			cout << calcu(calcu(a, b, op1), c, op2) << endl;
		else cout << calcu(calcu(b, c, op2), a, op1) << endl;
	}
	return 0;
}
