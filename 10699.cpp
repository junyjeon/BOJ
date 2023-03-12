#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] < 'a')
			str[i] = tolower(str[i]);
		else
			str[i] = toupper(str[i]);
	}
	cout << str;
}

int main(void)
{
	fast_io;
	solve();
	return 0;
}