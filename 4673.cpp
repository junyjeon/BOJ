#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int solve(int n)
{
	int sum = n;

	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return (sum);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	bool check[10001]{ false, };
	for (int i = 1; i < 10001; ++i)
	{
		int n = solve(i);
		if (n < 10001)
			check[n] = true;
	}
	for (int j = 1; j < 10001; ++j)
	{
		if (!check[j])
			cout << j << '\n';
	}
	return(0);
}