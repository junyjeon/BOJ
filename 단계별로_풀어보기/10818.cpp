#include <iostream>
using namespace std;

int	main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N, max, min;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
		if (i == 0)
		{
			max = arr[i];
			min = arr[i];
		}
		else
		{
			if (max < arr[i])
				max = arr[i];
			if (min > arr[i])
				min = arr[i];
		}
	}
	cout << min << " " << max;
	return (0);
}