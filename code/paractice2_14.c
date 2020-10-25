#include <stdio.h>

double sum(double N)
{
	double odd=2*N-1;
	if (N>1)
	{
		return sum(N-1)+1/odd;
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
	printf("sum = %.6f\n",sum(N));
	return 0;
}