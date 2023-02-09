#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 5;
	int i = 0;
	int j = 1;
	while (n--)
	{
		while (j <= ((i + 1) * (i + 2) / 2))
		{
		//(1 + 1) * (1 + 2) / 2
		//1 * 2 / 2 = 1
		//2 * 3 / 2 = 3
		//3 * 4 / 2 = 6
		//4 * 5 / 2 = 10
		//5 * 6 / 2 = 15
		//6 * 7 / 2 = 21
		//5 9 12 14 15
		//0 4 3  2  1
		//0 1 3  6  10
		//(n - 1) / (n - 2) * 2
			printf("%3d", j);
			++j;
		}
		printf("\n");
		++i;
	}
	return 0;
}