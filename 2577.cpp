#include <iostream>
#include <vector>
using namespace std;

vector<int> v(10);

int	main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int	A, B, C, tmp;
	cin >> A >> B >> C;
	tmp = A * B * C;
	while (tmp != 0)
	{
		++v[tmp % 10];
		tmp /= 10;
	}
	for (int i = 0; i < 10; ++i)
		cout << v[i] << "\n";
	return (0);
}