#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, sum = 0;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		char num;
		cin >> num;
		sum += num - '0';
	}
	cout << sum;
	return(0);
}