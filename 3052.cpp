#include <iostream>
#include <vector>
using namespace std;

vector<int> v(10);
vector<int> arr(42);
int cnt = 0;

int	main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	for (int i = 0; i < 10; ++i)
	{
		cin >> v[i];
		++arr[v[i] % 42];
	}
	for (int j = 0; j < arr.size(); ++j)
	{
		if (arr[j] > 0)
			++cnt;
	}
	cout << cnt;
	return (0);
}