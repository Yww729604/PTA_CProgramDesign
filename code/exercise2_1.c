#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sum,n;
	sum=0;
	for (int i=0;i<4;i++)
	{
		scanf("%d",&n);
		sum+=n;
	}

	printf("Sum = %d; Average = %.1f\n",sum,sum/4.0);
	return 0;
}