#include <stdio.h>

double count(double N)
{
	if (N==1)
	{
		return 1;
	}
	if ((int)N%2)
	{
		return count(N-1)+N/(2*N-1);
	}
	else
	{
		return count(N-1)-N/(2*N-1);
	}
}

int main(int argc, char const *argv[])
{
	double N;
	scanf("%lf",&N);

	double sum=count(N);
	printf("%.3f\n", sum);
	return 0;
}