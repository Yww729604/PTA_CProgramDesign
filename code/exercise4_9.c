#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	for (int i = 0; i <= n / 2 + 1; ++i)
	{
		for (int j = i; j <= n/2 ; ++j)
		{
			printf("  ");
		}
		for (int j = 0; j < 2*i-1; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 0; i < n / 2 ; ++i)
	{
		for (int j = 0; j < i+1 ; ++j)
		{
			printf("  ");
		}
		for (int j = n; j > 2*i+2; --j)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
