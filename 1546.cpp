#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	double ans = 0;
	double S[1001];
	cin >> N;
	// vector<double> S;
	for (int i = 0; i < N; ++i)
		cin >> S[i];
	sort(S, S + N);
	for (int j = 0; j < N; ++j)
		ans = ans + (S[j] / S[N - 1]) * 100;
	// cout << fixed;
	cout.precision(8);
	cout << ans / N;
	// M = *max_element(S.begin(), S.end());
	// for (int j = 0; j < S.size(); ++j)
	// 	ans = ans / (M * 100);
	// cout << fixed;
	// cout.precision(6);
	// cout << ans;
	return (0);
}