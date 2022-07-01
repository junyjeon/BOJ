#include <iostream>
using namespace std;

int	main(void)
{
	int A, B;
	cin >> A >> B;

	cout << fixed;
	cout.precision(9);
	cout << (double)A / B;
	return (0);
}