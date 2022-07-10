#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int	main(void)
{
	int	T;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		int R;
		string P;
		cin >> R;
		cin >> P;

		for (int j = 0; j < P.size(); ++j)
		{
			for (int k = 0; k < R; ++k)
				cout << P[j];
		}
		cout << "\n";
	}
	return (0);
}