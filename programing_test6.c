#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 5;
	while (n >= 0)
	{
		int j = 1;
		while (j <= n)
		{
			printf("%3d", j);
			++j;
		}
		printf("\n");
		--n;
	}

	return 0;
}