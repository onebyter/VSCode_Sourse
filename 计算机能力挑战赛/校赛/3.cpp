#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool pd1(string s)
{
	for (auto c : s)
	{
		if (c >= 'A' && c <= 'Z') return true;
	}
	return false;
}
bool pd2(string s)
{
	for (auto c : s)
	{
		if (c >= 'a' && c <= 'z') return true;
	}
	return false;
}
bool pd3(string s)
{
	for (auto c : s)
	{
		if (c >= '0' && c <= '9') return true;
	}
	return false;
}
bool pd4(string s)
{
	for (auto c : s) //~,!,@,#,$,%,^
	{
		if (c == '^' || c == '~' || c == '!' || c == '@' || c == '#' || c == '$' || c == '%') return true;
	}
	return false;
}

int main()
{
	string s;
	while (cin >> s)
	{
		int ans = 0;
		if (s.size() < 8) cout << "NO\n";
		else
		{
			if (pd1(s)) ans++;
			if (pd2(s)) ans++;
			if (pd3(s)) ans++;
			if (pd4(s)) ans++;
			if (ans >= 3) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	
	return 0;
}
