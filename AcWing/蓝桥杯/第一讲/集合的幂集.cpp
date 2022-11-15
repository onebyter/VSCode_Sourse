#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

vector<vector<int> > res;
vector<int> path;
int n;

void dfs(int u)
{
	res.push_back(path);
	if (u > n) return;
	for (int i = u; i <= n; i++)
	{
		path.push_back(i);
		dfs(i+1);
		path.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n;
	dfs(1);
	for (int i = 0; i < res.size(); i++)
	{
		for (int j = 0; j < res[i].size(); j++)
			cout << res[i][j] << " ";
		cout << "\n";
	}
	
	return 0;
}
