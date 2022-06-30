#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int V;
int maxdist = 0, maxnode;
vector<pair<int, int>> v[100001];
int visited[100001] = {0, };

void input()
{
	cin >> V;
	for (int i = 0; i < V; ++i)
	{
		int num, n1, n2;
		cin >> num >> n1;
		while (n1 != -1)
		{
			cin >> n2;
			v[num].push_back({n1, n2});
			v[n1].push_back({num, n2});
			cin >> n1;
		}
	}
}

void dfs(int i, int dist)
{
	if (visited[i])
		return;
	if (maxdist < dist)
	{
		maxdist = dist;
		maxnode = i;
	}
	visited[i] = true;
	for (int j = 0; j < v[i].size(); ++j)
	{
		int next_i = v[i][j].first;
		int next_dist = v[i][j].second;
		dfs(next_i, next_dist + dist);
	}
}

int	main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	input();
	dfs(1, 0);
	memset(visited, false, sizeof(visited));
	maxdist = 0;
	dfs(maxnode, 0);
	cout << maxdist;
	return (0);
}