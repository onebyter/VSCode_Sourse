#include<iostream>
#include<cstring>
#include<algorithm>
#include<unordered_map>
using namespace std;

unordered_map<char, int> mp;

int main()
{
	string s, t;
	cin >> s >> t;

	for (char c : s)
		mp[c] += 1;

	for (char c : t)
		if (mp[c]) cout << "Y";

		else cout << "N";

	return 0;
}
