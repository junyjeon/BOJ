#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
#define mix(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)

int	cmp(string a, string b)
{
	if (a.size() == b.size())
		return (a < b);
	else
		return (a.size() < b.size());
}

int	solve()
{
	int N;
	cin >> N;
	string str[N];
	for (int i = 0; i < N; i++)
		cin >> str[i];
	sort(str, str + N, cmp);
	for (int i = 0; i < N; i++)
	{
		if (str[i] == str[i - 1])
			continue;
		cout << str[i] << "\n";
	}
	return (0);
}

int	main(void)
{
	fast_io;
	solve();
	return (0);
}
