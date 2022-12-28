#include <iostream>
#include <cmath>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int	solve()
{
	int arr[5], ans = 0;
	for (int i = 0; i < 5; i++)
		cin >> arr[i];
	for (int i = 0; i < 5; i++)
		ans += pow(arr[i], 2);
	ans %= 10;
	return (ans);
}

int	main(void)
{
	fast_io;
	cout << solve();
	return (0);
}
