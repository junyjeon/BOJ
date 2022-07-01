#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int C, N;
	cin >> C;
	for (int i = 0; i < C; ++i)
	{
		cin >> N;
		double tmp = 0, cnt = 0;
		int arr[N];
		for (int j = 0; j < N; ++j)
		{
			cin >> arr[j];
			tmp += arr[j];
		}
		tmp /= N;
		for (int k = 0; k < N; ++k)
		{
			if (tmp < arr[k])
				++cnt;
		}
		cout << fixed;
		cout.precision(3);
		cout << cnt / N * 100 << '%' <<'\n';
	}
	return(0);
}