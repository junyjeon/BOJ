#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, tmp, cnt = 1;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		tmp = 0;
		for (int j = 0; j < s.size(); ++j)
		{
			if (s[j] == 'O')
			{
				tmp += cnt;
				cnt++;
			}
			else
				cnt = 1;
		}
		cout << tmp << '\n';
	}
	return(0);
}