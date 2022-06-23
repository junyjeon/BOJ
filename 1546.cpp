#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
double ans = 0;
double S[1001];
int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> S[i];
	sort(S, S + N);
	for (int j = 0; j < N; ++j)
		ans = ans + (S[j] / S[N - 1]) * 100;
	cout << fixed;
	cout.precision(6);
	cout << ans / N;
	// M = *max_element(S.begin(), S.end());
	// for (int j = 0; j < S.size(); ++j)
	// {
	// 	S[j] = S[j] / (M * 100);
	// 	ans += S[j];
	// }
	// cout << ans;
	return (0);
}