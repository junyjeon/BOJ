#include <iostream>
using namespace std;

int	main(void)
{
	int A, B;

	cin >> A >> B;
	cout << A * (B % 10) << endl;
	cout << A * (B / 10) << endl;
	cout << A * (B / 100) << endl;
	cout << A * B;
	return (0);
}