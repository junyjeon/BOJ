#include <iostream>
using namespace std;

int	main(void)
{
	int A, B, n;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> A >> B;
		cout << A + B;
	}
	
	return (0);
}