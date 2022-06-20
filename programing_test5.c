#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 5;

	int i = 1;
	while (i <= n * 2)
	{
		int j = 1;
		while (j <= i)
		{
			printf("%3d", j + i);
			++j;
		}
		printf("\n");
		++i;
	}

	return 0;
}