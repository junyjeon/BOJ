#include <iostream>
using namespace std;

int	main(void)
{
	int N, X, A;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N >> X;
	for (int i = 0; i < N; ++i)
	{
		cin >> A;
		if (A < X)
			cout << A << " ";
	}
	return (0);
}