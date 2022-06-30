#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

ll sum(vector<int> &a)
{
	ll ans = 0;
	for (int i = 0; i < a.size(); ++i)
		ans += a[i];
	return (ans);
}