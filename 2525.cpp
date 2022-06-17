#include <iostream>
using namespace std;

int	main(void)
{
	int A, B, C, tmp;

	cin >> A >> B >> C;
	tmp = A * 60 + B + C;
	if (tmp / 60 > 23)
		cout << (tmp / 60) - 24 << " " << tmp % 60;
	else
		cout << tmp / 60 << " " << tmp % 60;
	return (0);
}