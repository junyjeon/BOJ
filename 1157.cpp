#include <iostream>
#include <algorithm>
#include <vector>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int	solve()
{
	int max_index, cnt = 0;
	string str;
	getline(cin, str);
	if (str.empty())
		cout << "0";
	vector<int> v(26);
	for (int i = 0; i < str.length(); i++){
		if ((int)str[i] < 97)	v[(int)str[i] - 65]++;
		else v[(int)str[i] - 97]++;
	}
	max_index = v[0];
	for (int i = 1; i < 26; i++)
		max_index = max_element(v.begin(), v.end()) - v.begin();
	for (int i = 0; i < 26; i++)
		if (v[max_index] == v[i]) cnt++;
	if (1 < cnt)
		cout << "?";
	else
		cout << (char)(max_index + 65) << "\n";
	return (0);
}

int	main(void)
{
	fast_io;
	solve();
	return (0);
}
