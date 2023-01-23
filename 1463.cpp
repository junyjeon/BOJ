#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int	solve()
{
	int X;
	cin >> X;
	vector<int> dp(X + 1);

	dp[1] = 0;
	for (int i = 2; i <= X; i++)
	{
		dp[i] = dp[i - 1] + 1;
		if (!(i % 3))
			dp[i] = min(dp[i], dp[i / 3] + 1);
		if (!(i % 2))
			dp[i] = min(dp[i], dp[i / 2] + 1);
	}
	return (dp[X]);
}

int	main(void)
{
	fast_io;
	cout << solve();
	return (0);
}
a