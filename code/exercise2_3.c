#include <stdio.h>


int main(int argc, char const *argv[])
{
	double m,n;
	scanf("%lf %lf",&m,&n);
	double sum=0;
	for (double i=m;i<=n;i++)
	{
		sum+=i*i+1/i;
	}

	printf("sum = %lf\n", sum);
	return 0;
}