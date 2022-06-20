#include <iostream>
using namespace std;

int N;

int	main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;
	for (int i = 0; i < N; ++i)
		cout << i + 1 << "\n";
	return (0);
}