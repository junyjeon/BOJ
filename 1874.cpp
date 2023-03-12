#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
	int n, last_pushed = 0;
	cin >> n;
	vector<int> sequence(n);
	vector<char> operations;
	stack<int> st;
	
	for (int i = 0; i < n; i++)
		cin >> sequence[i];
	for (int i = 0; i < n; i++)
	{
		int x = sequence[i];
		if (last_pushed < x)
		{
			for (int j = last_pushed + 1; j <= x; j++)
			{
				st.push(j);
				operations.push_back('+');
			}
			last_pushed = x;
		}
		if (st.top() == x)
		{
			st.pop();
			operations.push_back('-');
		}
		else if (st.top() > x)
		{
			cout << "NO\n";
			return ;
		}
	}
	for (char op: operations)
		cout << op << "\n";
}

int main(void)
{
	fast_io;
	solve();
	return 0;
}