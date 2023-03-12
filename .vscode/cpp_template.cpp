#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
	int n;
	cin >> n;

	int count = 0;
	int num = 666;

	while (count < n)
	{
		if (to_string(num).find("666") != string::npos)
			count++;
		num++;
	}
	cout << num - 1 << "\n";
}

int main(void)
{
	fast_io;
	solve();
	return 0;
}