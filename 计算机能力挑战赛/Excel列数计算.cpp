#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

char num[200];

void init()
{
	num['A'] = 1;

	for (int i = 1; i <= 25; i++)
		num['A' + i] = num['A'] + i;
}

int change(string s)
{
	int x = 0;

	for (char c : s)
		x = x * 26 + num[c];

	return x;
}

int main()
{
	string s, t;
	cin >> s >> t;
	init();
	int x = change(s);
	int y = change(t);

	if (y >= x)
		cout << y - x - 1;
	else cout << x - y - 1;

	return 0;
}
