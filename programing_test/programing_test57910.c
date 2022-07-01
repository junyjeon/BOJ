#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 5;
	int i = 0;
	while (i < n)
	{
		int j = 1 + i;
		while (j <= n + i)
		{
			printf("%3d", j);
			++j;
		}
		printf("\n");
		++i;
	}

	return 0;
}