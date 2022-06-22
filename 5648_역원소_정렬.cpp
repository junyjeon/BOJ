#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<long long> v;
	while (n--)
	{
		string s;
		cin >> s;
		reverse(s.begin(), s.end());
		v.push_back(stoll(s));
	}
	sort(v.begin(), v.end());
	for (auto i : v)
		cout << i << '\n';
	return (0);
}
//
