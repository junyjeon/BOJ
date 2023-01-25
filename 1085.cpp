#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int	solve()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	return (min(min(x, y), min(w - x, h - y)));
}

int	main(void)
{
	fast_io;
	cout << solve();
	return (0);
}
