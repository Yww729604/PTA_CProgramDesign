#include <stdio.h>

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

int main(int argc, char const *argv[])
{
	double n;
	scanf("%lf",&n);
	double out=1;
	for (int i = 1; i <= n; ++i)
	{
		out+=1/fact(i);
	}
	printf("%.8f\n",out);
	return 0;
}