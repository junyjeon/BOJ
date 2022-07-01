#include <iostream>
using namespace std;

int	main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int	N, max = 0, cnt = 0;
	for (int i = 0; i < 9; ++i)
	{
		cin >> N;
		if (max < N)
		{
			max = N;
			cnt = i;
		}
	}
	cout << max << "\n" << cnt + 1;
	return (0);
}