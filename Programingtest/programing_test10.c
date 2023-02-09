#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 5;
	int i = 0;
	int j = 1;
	while (i < n)
	{
		while (j <= (i + 1) * (i + 2) / 2)
		{
			printf("%3d", j);
			++j;
		}
		printf("\n");
		++i;
	}
	return 0;
}