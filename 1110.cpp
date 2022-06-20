#include <iostream>
using namespace std;

int	main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N, tmp, cnt = 0;
	cin >> N;
	tmp = N;
	while (1)
	{
		N = N % 10 * 10 + ((N / 10) + (N % 10)) % 10;
		++cnt;
		if (N == tmp)
			break;
	}
	cout << cnt;
	return (0);
}