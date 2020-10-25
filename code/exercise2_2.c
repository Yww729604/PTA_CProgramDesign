#include <stdio.h>

int main(int argc, char const *argv[])
{
	double kw;
	scanf("%lf",&kw);
	if (kw<0)
	{
		printf("Invalid Value!\n");
	}
	else
	{
		double cost = kw*0.53;
		if (kw>50)
		{
			cost+=0.05*(kw-50);
		}	
		printf("cost = %.2f\n",cost);
	}
	
	return 0;
}