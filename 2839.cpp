#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int	solve()
{
	int N, cnt;
	cin >> N;
	cnt = N / 5;
	while (1)
	{
		if (cnt < 0)
			return (-1);
		if ((N - 5 * cnt) % 3 == 0)
		{
			cnt += (N - 5 * cnt) / 3;
			break;
		}
		cnt--;
	}
	return (cnt);
}

int	main(void)
{
	fast_io;
	cout << solve();
	return (0);
}
