#include <iostream>
using namespace std;

int n, A, B;

int	main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> A >> B;
		cout << A + B << "\n";
	}
	return (0);
}