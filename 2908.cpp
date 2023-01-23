#include <iostream>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int	solve()
{
	string a, b, ans;
	cin >> a >> b;
	for (int i = 2; i >= 0; i--)
	{
		if (a[i] == b[i])
			continue;
		if (a[i] > b[i])
			ans = a;
		else if (a[i] < b[i])
			ans = b;
		break;
	}
	cout << ans[2] << ans[1] << ans[0];
	return (0);
}

int	main(void)
{
	fast_io;
	solve();
	return (0);
}
