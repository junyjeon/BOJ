#include <iostream>
using namespace std;

int	main(void)
{
	int A, B;

	cin >> A >> B;
	if (B >= 45)
		cout << A << " " << B - 45;
	else if (A == 0)
		cout << "23" << " " << 60 - (45 - B);
	else
		cout << A - 1 << " " << 60 - (45 - B);
	return (0);
}