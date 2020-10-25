#include <stdio.h>


double sum(double eps,double N)
{
	double odd=3*N-2;
	if (eps < 1/odd)
	{
		int k=(int) N;
		printf("%.6f\n",1/odd);
		// printf("%f\n",odd );
		if (k%2 == 0)
		{
			return sum(eps,N+1)-1/odd;
		}
		else
		{
			return sum(eps,N+1)+1/odd;
		}
	}
	else
	{
		return 1/odd;
	}
}

int main(int argc, char const *argv[])
{
	double eps;
	scanf("%lf",&eps);
	printf("%.6f\n",eps);
	printf("sum = %.6f\n",sum(eps,1) );
	// printf("%d\n", );
	// if (1/52.0>0.02)
	// {
	// 	printf("1\n");
	// }
	return 0;
}