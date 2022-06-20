#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 5;

	int i = 1;
	int j = 1;
	while (i <= n)
	{
		while (j <= n * 2 * i)
		{
			printf("%3d", j);
			j += 2;
		}
		printf("\n");
		i++;
	}

	return 0;
}