#include <iostream>
using namespace std;

int	main(void)
{
	int A, B, T;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		cin >> A >> B;
		cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << "\n";
	}
	return (0);
}