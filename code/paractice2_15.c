#include <stdio.h>

double sum(double N)
{
	double odd=3*N-2;
	if (N>1)
	{
		int k=(int) N;
		if (k%2==0)
		{
			return sum(N-1)-1/odd;
		}
		else
		{
			return sum(N-1)+1/odd;
		}

	}
	else
	{
		return 1/N;
	}
}

int main(int argc, char const *argv[])
{
	double N;
	scanf("%lf",&N);
	printf("sum = %.3f\n",sum(N));
	return 0;
}