//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//string s1, s2, s;
//int k, ans;
//int main()
//{
//	cin >> k >> s1 >> s2 >> s;
//	for (int i = 0; i < s.size() - 1; i++)
//	{
//		int j = i, k = 0;
//		while (s[j] == s1[k] && k < s1.size())
//			j++, k++;
//		if (k == s1.size()) ans++;
//		if (ans == 3)
//		{
//			s.replace()
//		}
//	}
//	return 0;
//}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int k;
	string s1, s2, s;
	cin >> k >> s1 >> s2;
	getchar();
	getline(cin, s);
	if (s.find(s1) == -1)
	{
		cout << "F";
		return 0;
	}
	int i = 0, cnt = 0;
	while (i < s.length())
	{
		if (s.substr(i, s1.length()) == s1)
		{
			cnt++;
			i += s1.length();
		}
		else
			i++;
	}
	if (cnt < k)
	{
		cout << "F";
		return 0;
	}
	int j = 0;
	cnt = 0;
	string res = "";
	while (j < s.length())
	{
		if (s.substr(j, s1.length()) == s1)
		{
			cnt++;
			res += s2;
			j += s1.length();
			if (cnt == k) break;
		}
		{
			res += s[j];
			j++;
		}
	}
	res += s.substr(j);
	cout << res;
	return 0;
}
