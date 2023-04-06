#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void	solve()
{
	int t;cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, m, cnt = 0;
		cin >> n >> m;
		queue<int>q;
		deque<int>d;
		for (int j = 0; j < n; j++)
		{
			int tmp;
			cin >> tmp;
			q.push(tmp); d.push_back(tmp);
		}
		sort(d.begin(), d.end(), greater<int>());
		while (!q.empty())
		{
			while (q.front() != d.front())
			{
				q.push(q.front());
				q.pop();
				m--;
				if (m == -1)
					m += q.size();
			}
			q.pop(); d.pop_front();
			cnt++;
			if (m == 0)
				break;
			m--;
		}
		cout << cnt << '\n';
	}
}

int	main(void)
{
	fast_io;
	solve();
	return 0;
}