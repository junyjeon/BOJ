#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 5;
	int i, j;
	
	i = n;
	while (i > 0)
	{
		j = 1;
		while (j + (n * i - 5) <= n * i)
		{
			printf("%3d", j + (n * i - 5));
			j++;
		}
		printf("\n");
		--i;
	}

	return 0;
}