#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int	main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N, res = 0;
	cin >> N;

	vector<pair<int, int>> v;
	int val;

	for (int i = 0; i < N; ++i)
	{
		cin >> val;
		v.push_back(pair<int, int>(val,i));
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < N; ++i)
		if (v[i].second - i > res)
			res = v[i].second - i;
	cout << res + 1 << '\n';
	return (0);
}