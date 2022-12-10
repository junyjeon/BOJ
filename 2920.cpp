#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int	solve()
{
	int arr[8], a[8], ascending = 0, descending = 0, j = 7;
	for (int i = 0; i < 8; i++)
		arr[i] = i + 1;
	cin >> a[0];
	if (a[0] == arr[0])
		ascending = 1;
	else if (a[0] == arr[7])
		descending = 1;
	else
		return (0);
	for (int i = 1; i < 8; i++)
	{
		cin >> a[i];
		--j;
		if (ascending && a[i] == arr[i])
			continue;
		else if (descending && a[i] == arr[j])
			continue;
		else
			return (0);
	}
	if (ascending)
		cout << "ascending";
	else if (descending)
		cout << "descending";
	return (1);
}

int	main(void)
{
	fast_io;
	if (!solve())
		cout << "mixed";	
	return (0);
}
