#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int solve(int n)
{
	int cnt = 0;

	if (n < 100)
		return n;
	else
	{
		cnt = 99;
		for (int i = 100; i <= n; ++i)
		{
			int hun = i / 100;
			int ten = (i / 10) % 10;
			int one = i % 10;

			if ((hun - ten) == (ten - one))
				cnt++;
		}
	}
	return (cnt);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	int res = solve(N);
	cout << res;
	return(0);
}