#include <iostream>
using namespace std;

int	main(void)
{
	int n, res;

	res = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		res += i;
	cout << res;
	return (0);
}