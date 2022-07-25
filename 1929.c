#include <stdio.h>//에라토스테네스의 체

int a[1000001];

int main(void)
{
	int M, N;
	scanf("%d %d", &M, &N);
	for (int i = 2; i <= N; i++)
	{
		if (a[i] == 0)
		{
			for (int j = i + i; j <= N; j += i)
				a[j] = 1;
		}
		if(i >= M && a[i] == 0)
			printf("%d\n", i);
	}
	return (0);
}