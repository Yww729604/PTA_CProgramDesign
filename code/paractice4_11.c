#include <stdio.h>
#include <math.h>


int isPrimer(int n)
{
	int out = 1;
	if (n>1)
	{
		if (n==2)
		{
			out = 1;
		}
		else
		{
			for (int i = 2; i < n; ++i)
			{
				if (n % i == 0)
				{
					out = 0;
					break;
				}	
			}
		}
	}
	else
	{
		out = 0;
	}

	return out;
}

int main(int argc, char const *argv[])
{
	int m,n;
	scanf("%d %d",&m,&n);

	int sum = 0;
	int count = 0;
	for (int i = m; i <= n ; ++i)
	{
		if (isPrimer(i))
		{
			sum += i;
			count++;
			// printf("%d\n", i);
		}
	}

	printf("%d %d\n",count,sum);

	return 0;
}