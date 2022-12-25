#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int	solve()
{
	string str;
	int cnt = 0;
	getline(cin, str);
	if (str.empty())
		cout << "0";
	for (int i = 0; i < str.length(); i++)
		if (str[i] == ' ' && i != 0)
			cnt++;
	if (str.back() == ' ')
		cnt--;
	cnt++;
	return (cnt);
}

int	main(void)
{
	fast_io;
	solve();
	return (0);
}
