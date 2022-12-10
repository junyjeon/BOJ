#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, k;
	cin >> N >> k;
	int A[N][N], B[N * N];
	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j < N; j++)
		{
			A[i][j] = i * j;
			B[N * j] = A[i][j]; 
		}
	}
	cout << B[k];
	return (0);
}
