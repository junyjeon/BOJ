#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void	solve()
{
	int N;cin >> N;
	int	a[N];
	for (int i = 0; i < N; ++i)
		cin >> a[i];
	sort(a, a + N);
	int M;cin >> M;
	for (int i = 0; i < M; ++i)
	{
		int tmp;cin >> tmp;
		cout << binary_search(a, a + N, tmp) << "\n";
	}
}

int	main(void)
{
	fast_io;
	solve();
	return 0;
}