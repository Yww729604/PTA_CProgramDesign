#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	double m;
	scanf("%lf",&m);
	double sum=0;
	for (double i=1;i<=m;i++)
	{
		sum+=sqrt(i);
	}

	printf("sum = %.2f\n", sum);
	return 0;
}