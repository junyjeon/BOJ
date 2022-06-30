#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B, V, ans = 1;
	cin >> A >> B >> V;
	ans += (V - A) / (A - B);
	if ((V - A) % (A - B) != 0)
		ans++;
	if (A >= V)
		cout << '1';
	else
		cout << ans;
	return(0);
}