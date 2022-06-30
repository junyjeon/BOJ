#include <iostream>
using namespace std;

int S;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int i = 0, cnt = 0;
	cin >> S;
	while (i < S)
	{
		i += i + 1;
		cnt++;
	}
	cout << cnt;
	return (0);
}