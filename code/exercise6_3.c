#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */

int factorsum( int number )
{
	int sum = 0;
	for (int i = 1; i < number; ++i)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}
void PrintPN( int m, int n )
{
	int flag = 1;
	for (int i = m; i <= n; ++i)
	{
		int sum = 0;
		if (factorsum(i) == i)
		{
			flag = 0;
			printf("%d =",i);
			for (int j = 1; j < i; ++j)
			{
				if (i % j == 0)
				{
					printf(" %d",j);
					sum += j;
					if (sum < i)
					{
						printf(" +");
					}
					else
					{
						printf("\n");
					}
				}
			}
		}
	}
	if (flag)
	{
		printf("No perfect number\n");
	}
}