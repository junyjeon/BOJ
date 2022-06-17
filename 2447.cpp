#include <iostream>
using namespace std;

void	solve(int n, int x, int y)
{
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1)
		cout << " ";
	else
	{
		if (n / 3 == 0)
			cout << "*";
		else
			solve(n / 3, x, y);
	}
}

int	main(void)
{
	int	n;
	int	i;
	int	j;

	cin >> n;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			solve(n, i, j);
			++j;
		}
		cout << "\n";
		++i;
	}
	return (0);
}