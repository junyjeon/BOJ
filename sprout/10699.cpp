#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
	map<string, double> grades = 
	{
		{"A+", 4.3},
		{"A0", 4.0},
		{"A-", 3.7},
		{"B+", 3.3},
		{"B0", 3.0},
		{"B-", 2.7},
		{"C+", 2.3},
		{"C0", 2.0},
		{"C-", 1.7},
		{"D+", 1.3},
		{"D0", 1.0},
		{"D-", 0.7},
		{"F", 0.0},
	};
	string grade;
	cin >> grade;
	cout.precision(1);
	cout << fixed << grades[grade];

}

int main(void)
{
	fast_io;
	solve();
	return (0);
}