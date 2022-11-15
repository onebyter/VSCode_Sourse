#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

const int N = 110;
typedef pair<int, int> PII;
queue<PII> q;
int mp[N][N];
bool vis[N][N];
int dd[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
int n, m;

int bfs()
{
	int res = 0;
	q.push({0, 0});
	vis[0][0] = true;
	while (!q.empty())
	{
		int sz = q.size();
		for (int i = 0; i < sz; i ++ )
		{
			auto t = q.front();
			q.pop();
			if (t.first == n-1 && t.second == m-1) return res;
			for (int j = 0; i < 4; j ++ )
			{
				int tx = t.first + dd[i][0], ty = t.second + dd[i][1];
				if (mp[tx][ty] == 0 && !vis[tx][ty] && tx >= 0 && tx < n && ty >= 0 && ty < m)
				{
					vis[tx][ty] = true;
					q.push({tx, ty});
				}
			}
		}
		res++;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i ++ )
		for (int j = 0; j < m; j ++ )
			cin >> mp[i][j];
	cout << bfs();
	return 0;
}
