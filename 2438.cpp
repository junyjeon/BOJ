#include <iostream>
using namespace std;

int	main(void)
{
	int N;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j <= i; ++j)
			cout << "*";
		cout << "\n";
	}
	return (0);
}