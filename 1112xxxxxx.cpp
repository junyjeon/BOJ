#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int res = 0, x, b;
vector<int> v;
vector<int> a;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> x >> b;
	for (int i = 0; x != 0; ++i)
	{
		if (x < 0 || b < 0)
		{
			v.push_back(b + x % b);
			x = (x / b) + 1;
			a.push_back(x);
		}
		else
		{
			v.push_back(x % b);
			x /= b;
			a.push_back(x);
		}
	}
	reverse(v.begin(), v.end());
	reverse(a.begin(), a.end());
	for (int j = 0; j < v.size(); ++j)
		a[j] = a[j] * b + v[j];
	cout << a.back();
	return (0);
}
