#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void	solve()
{
	int a[8];
	for (int i=0;i<8;i++)
		cin >> a[i];
	for (int i = 0; i < 8; i++)
	{
		if ((a[0] == 1 && a[i] == a[i + 1] - 1) || (a[0] == 8 && a[i] == a[i + 1] + 1))
			continue;
		cout << "mixed";
		return (0);
	}
	if (a[0] == 1)
		cout << "asending";
	if (a[0] == 8)
		cout << "desending";
}

int	main(void)
{
	fast_io;
	solve();	
	return (0);
}
