#include <iostream>
using namespace std;

int	main(void)
{
	int A, B, C, max;

	cin >> A >> B >> C;
	if (A == B && A == C)
		cout << 10000 + A * 1000;
	else if (A == B || A == C)
		cout << 1000 + A * 100;
	else if (B == C)
		cout << 1000 + B * 100;
	else
	{
		if (A > B && A > C)
			max = A;
		else if (B > A && B > C)
			max = B;
		else
			max = C;
		cout << max * 100;
	}
	return (0);
}