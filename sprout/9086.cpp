#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

long long fuction(long a, long b) {return (a*a - b*b);}

void solve()
{
	int A, B;
	cin >> A >> B;
	cout << fuction(A, B);
}

int main(void)
{
	fast_io;
	solve();
	return 0;
}