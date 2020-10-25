#include <stdio.h>
#include <math.h>


double fact(int n)
{
	if (n>1)
	{
		return fact(n-1)*n;
	}
	else
	{
		return 1;
	}
}

int main(int argc, char const *argv[])
{
	double m,n;

	scanf("%lf %lf",&m,&n);

	printf("result = %.0f\n", fact(n)/(fact(m)*fact(n-m)));
}