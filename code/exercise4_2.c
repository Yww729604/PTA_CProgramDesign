#include <stdio.h>
#include <math.h>


double fact(double n)
{
	if (n>1)
	{
		return fact(n-1)*n;
	}
	else
	{
		return n;
	}
}

double singlePart(double k,double x)
{
	return pow(x,k)/fact(k);
}

int main(int argc, char const *argv[])
{
	double x;
	scanf("%lf",&x);
	double out = 1;
	int k = 1;
	double last;
	do
	{
		last = singlePart(k,x);
		// printf("%.7f\n",last );
		out += last;
		k++;
	} while (last>0.00001);

	printf("%.4f\n", out);

	return 0;
}