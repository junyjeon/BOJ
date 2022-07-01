#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 5;

	int i = 1;
	while (i <= n)
	{
		int j = 1;
		while (j <= i)
		{
			printf("%3d", j);
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}