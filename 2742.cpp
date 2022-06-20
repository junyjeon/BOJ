#include <iostream>
using namespace std;

int N;

int	main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;
	for (int i = N; i > 0; --i)
		cout << i << "\n";
	return (0);
}